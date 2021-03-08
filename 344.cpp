class Solution {
public:
    void reverseString(vector<char>& s) {
        int last=s.size()-1;
        char t='\0';
        for(int i=0;i<last;i++){
            t=s[i];
            s[i]=s[last];
            s[last]=t;
            last--;
        }
    }
};
