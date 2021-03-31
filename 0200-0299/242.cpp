class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        int charCount[256]={0};
        for(int i=0;i<s.length();i++){
            charCount[s[i]]++;
            charCount[t[i]]--;
        }
        for(int i=0;i<256;i++){
            if(charCount[i]!=0)
                return false;
        }
        return true;
    }
};
