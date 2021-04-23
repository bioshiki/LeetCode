// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l=0, r=n;
        int m=(r-l)/2+l;
        while(l+1!=r){
            if(isBadVersion(m))
                r=m;
            else
                l=m;
            m=(r-l)/2+l;
        }
        return r;
    }
};
