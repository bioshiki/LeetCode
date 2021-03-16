//method 1:
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t r=0;
        int count =0;
        while(n!=0){
            r=r*2+n%2;
            n/=2;
            count++;
        }
        while(count<32){
            r*=2;
            count++;
        }
        return r;
    }
};

/*method 2:better method found on LeetCode:
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ret = 0, power = 31;
        while (n != 0) {
            ret += (n & 1) << power;
            n = n >> 1;
            power -= 1;
        }
        return ret;
    }
};
*/
