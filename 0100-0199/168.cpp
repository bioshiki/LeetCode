class Solution {
public:
    string convertToTitle(int columnNumber) {
        string r="";
        while(columnNumber!=0){
            char temp=65+(--columnNumber)%26;
            r=temp+r;
            columnNumber/=26;
        }
        return r;
    }
};
