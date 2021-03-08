/*
//method 1: slow
class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> m;
        for(int i=0;s[i]!='\0';i++){
            m[s[i]]++;
        }
        for(int i=0;s[i]!='\0';i++){
            if(m[s[i]]==1)
                return i;
        }
        return -1;
    }
};
*/

//method 2: use ASCII code of each char as the index of array
class Solution {
public:
    int firstUniqChar(string s) {
        int n[256]={0};
        for(int i=0;i<s.length();i++){
            n[s[i]]++;
        }
        for(int i=0;i<s.length();i++){
            if(n[s[i]]==1)
                return i;
        }
        return -1;
    }
};
