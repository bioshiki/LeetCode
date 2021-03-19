class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int size1=nums1.size();
        int size2=nums2.size();
        vector<int> r;
        if(size1==0||size2==0)
            return r;
        map<int,int> m;
	//in order to save same memory
        if(size1<=size2){
            for(int i=0;i<size1;i++){
                m[nums1[i]]++;
            }
            for(int i=0;i<size2;i++){
                if(m[nums2[i]]-->0){
                    r.push_back(nums2[i]);
                }
            }
        }else{
            for(int i=0;i<size2;i++){
                m[nums2[i]]++;
            }
            for(int i=0;i<size1;i++){
                if(m[nums1[i]]-->0){
                    r.push_back(nums1[i]);
                }
            }
        }
        return r;
    }
};
