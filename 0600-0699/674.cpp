class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int size=nums.size();
        if(size==0)
            return 0;
        if(size==1)
            return 1;
        int length=1;
        int l=0,r=0;
        for(int i=1;i<size;i++){
            if(nums[i]>nums[i-1]){
                r=i;
            }else{
                length=max(length,r-l+1);
                l=i;
            }
        }
        return max(length,r-l+1);
    }
};
