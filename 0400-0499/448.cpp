//method on LeetCode: check by positive or negative
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int len = nums.size();
        for(int i=0; i<len; i++) {
            int m = abs(nums[i])-1; // index start from 0
            nums[m] = nums[m]>0 ? -nums[m] : nums[m];
        }
        vector<int> res;
        for(int i = 0; i<len; i++) {
            if(nums[i] > 0) res.push_back(i+1);
        }
        return res;
    }
};
/*
//method of re-arrange the array, slower than first one
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> r;
        for(int i=0;i<nums.size();i++){
            while(nums[i]!=-1&&nums[i]!=i+1){
                if(nums[i]==nums[nums[i]-1])
                    nums[i]=-1;
                else
                    swap(nums[i],nums[nums[i]-1]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==-1)
                r.push_back(i+1);
        }
        return r;
    }
};
*/
