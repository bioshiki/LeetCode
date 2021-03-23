//method 1: runtime O(n)
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int min1=INT_MAX,min2=INT_MAX;
        int max1=INT_MIN,max2=INT_MIN,max3=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<min1){
                min2=min1;
                min1=nums[i];
            }else if(nums[i]<min2){
                min2=nums[i];
            }
            if(nums[i]>max1){
                max3=max2;
                max2=max1;
                max1=nums[i];
            }else if(nums[i]>max2){
                max3=max2;
                max2=nums[i];
            }else if(nums[i]>max3){
                max3=nums[i];
            }
        }
        return max(min1*min2*max1,max1*max2*max3);
    }
};
/*
//method 2: runtime O(nlogn)
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        return max(nums[n]*nums[n-1]*nums[n-2],nums[0]*nums[1]*nums[n]);
    }
};
*/
