class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int size=nums.size();
        vector<vector<int>> r;
        r.push_back({});
        //if (size==0) return r;
        int count=1;
        for(int i=0;i<size;i++){
            for(int j=0;j<count;j++){
                r.push_back(r[j]);
                r[count+j].push_back(nums[i]);
            }
            count*=2;
        }
        return r;
    }
};
