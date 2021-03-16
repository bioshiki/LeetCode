class Solution {
public:
    int titleToNumber(string s) {
        int r=0;
        for(int i=0;s[i]!='\0';i++){
            r*=26;
            r+=s[i]-'A'+1;
        }
        return r;
    }
};
