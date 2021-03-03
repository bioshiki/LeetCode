class Solution {
public:
    int mySqrt(int x) {
        if(x<2){
            return x;
        }
        int n1=2;
        int n2=x/2;
        while(n1-n2>1||n1-n2<-1){
            n1=(n1+n2)/2;
            n2=x/n1;
        }
        if(n1<n2){
            return n1;
        }else{
            return n2;
        }
    }
};
