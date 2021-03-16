class Solution {
public:
    int climbStairs(int n) {
        if(n<=0){
            return 0;
        }else if(n==1){
            return 1;
        }else if(n==2){
            return 2;
        }else{
            int n1=1;
            int n2=2;
            for(int i=3;i<n;i++){
                int t=n1+n2;
                n1=n2;
                n2=t;
            }
            return n1+n2;
        }
    }
};
