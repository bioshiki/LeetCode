class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,bool>n1;
        vector<int>r;
        for(int i=0;i<nums1.size();i++){
            n1[nums1[i]]=true;
        }
        for(int i=0;i<nums2.size();i++){
            if(n1[nums2[i]]){
                r.push_back(nums2[i]);
                n1[nums2[i]]=false;
            }
        }
        return r;
    }
};
