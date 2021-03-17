class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            while(nums[i]!=i&&nums[i]!=-1){
                if(nums[i]!=n){
                    swap(nums[i],nums[nums[i]]);
                }else{
                    nums[i]=-1;
                }
            }           
        }
        for(int i=0;i<n;i++){
            if(nums[i]==-1)
                return i;
        }
        return n;
    }
};
