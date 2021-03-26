class Solution {
public:
    string addBinary(string a, string b) {
        int la=a.length();
        int lb=b.length();
        string r="";
        bool extra=false;
        for(int i=a.length()-1,j=b.length()-1;i>-1||j>-1||extra;i--,j--){
            int t=extra;
            if(i>-1)
                t+=a[i]-'0';
            if(j>-1)
                t+=b[j]-'0';
            extra=t>1;
            t=t%2;
            r=to_string(t)+r;
        }
        return r;
    }
};
