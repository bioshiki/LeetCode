/*method on LeetCode:Power of 2 means only one bit of n is '1', so use the trick n&(n-1)==0 to judge whether that is the case

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) 
		return false;
        return !(n&(n-1));
    }
};
*/
//not smart method
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n<1)
            return false;
        while(n>=256){
            if(n%256)
                return false;
            n/=256;
        }
        while(n>=2){
            if(n%2)
                return false;
            n/=2;
        }
        return true;
    }
};
