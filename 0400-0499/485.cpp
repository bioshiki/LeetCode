class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0,j=0,maxium=0;
	//loop util find the begining of 1s
        while(i<nums.size()-maxium){
            if(nums[i]==1){
                for(j=i;j<nums.size()&&nums[j]!=0;j++);
                maxium=max(j-i,maxium);
                i=j;
            }else
                i++;
        }
        return maxium;
    }
};
