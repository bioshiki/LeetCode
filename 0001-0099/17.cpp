class Solution {
public:
    vector<string> letterCombinations(string digits) {
        int length=digits.length();
        vector<string> s;
        char standard[8]={'a','d','g','j','m','p','t','w'};
        if(length==0)
            return s;
        int num=1;
        //a-97;z-122;2-50;9-57
        for(int i=0;i<length;i++){
            if(digits[i]=='7'||digits[i]=='9')
                num*=4;
            else
                num*=3;
        }
        s=vector<string> (num,"");
        char t='a';
        int part=num;
        for(int i=0;i<length;i++){
            part/=(digits[i]=='7'||digits[i]=='9'?4:3);
            t=standard[digits[i]-'2'];
            for(int j=0;j<num;j++){
                s[j]+=(t+(j/part)%(digits[i]=='7'||digits[i]=='9'?4:3));
            }
        }
        return s;
    }
};
