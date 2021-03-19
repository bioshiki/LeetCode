class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int size=nums.size();
        if(size==0)
            return 0;
        if(size==1)
            return 1;
        sort(nums.begin(),nums.end());
        int maxium=1;
        int count=0;
        for(int i=0;i<size-maxium;i++){
            if(nums[i]+1==nums[i+1]){
                count=1;
                while(i<size-1&&nums[i]+1-nums[i+1]>=0){
                    if(nums[i]!=nums[i+1])
                        count++;
                    i++;
                }
                maxium=max(maxium,count);
            }
        }
        return maxium;
    }
};
