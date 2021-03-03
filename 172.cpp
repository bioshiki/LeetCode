class Solution {
public:
    int trailingZeroes(int n) {
        int r=0;
        for(int i=n;i>4;i/=5){
            r+=i/5;
        }
        return r;
    }
};
