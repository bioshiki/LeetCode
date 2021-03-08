//use Kadane's algorithm
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size=nums.size();
        if(size==1){
            return nums[0];
        }
        int largest=nums[0];
        int sum=nums[0];
        for(int i=1;i<size;i++){
            sum=max(nums[i],nums[i]+sum);
            largest=max(sum,largest);
        }
        return largest;
    }
};
