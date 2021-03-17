class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
	//use unordered_map in order to reduce runtime
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]]!=0){
                if(i+1-m[nums[i]]<=k)
                    return true;
            }
            m[nums[i]]=i+1;
            
        }
        return false;
    }
};