class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size=nums.size();
        int count=1;
        for(int i=0;i<size-count;i++){
            if(nums[i]==0){
                while(nums[i+count]==0&&i<size-count-1){
                    count++;
                }
                swap(nums[i],nums[i+count]);
            }
        }
    }
};
