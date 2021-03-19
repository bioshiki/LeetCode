class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size=nums.size();
        if(size==1)
            return 1;
        if(size==2)
            return 1+(nums[1]!=nums[0]);
        int count =0;
        for(int i=1;i<size-count;i++){
            nums[i]=nums[i+count];
            if(nums[i]==nums[i-1]){
                count++;
                i--;
            }
        }
        return size-count;
    }
};
