class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> r;
        string t;
        int size=nums.size();
        for(int i=0;i<size;i++){
            t=to_string(nums[i]);
            if(i+1<size&&nums[i+1]-1==nums[i]){
                t+="->";
                while(i+1<size&&nums[i+1]-1==nums[i]){
                    i++;
                }
                t+=to_string(nums[i]);
            }
            r.push_back(t);
        }
        return r;
    }
};
