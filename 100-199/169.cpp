class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size=nums.size();
        if(size==1)
            return nums[0];
        map<int,int> m;
        for (int i=0;i<size;i++){
            auto f=m.find(nums[i]);
            if(f!=m.end()){
                if(++m[nums[i]]>size/2){
                    return nums[i];
                }
            }else{
                m[nums[i]]=1;
            }
        }
        return 0;
    }
};

/*
faster solution on LeetCode:
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int candidates=-1;
        for(int i=0;i<nums.size();i++){
            if(count==0)
                candidates = nums[i];
            count+=candidates==nums[i]?1:-1;
        }
        return candidates;
    }
};
*/
