//runtime O(n), space O(1)
//method 1
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

/*
//method 2:
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        return n*(n+1)/2-sum;
    }
};
*/
