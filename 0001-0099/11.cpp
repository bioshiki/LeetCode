class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int amount=0;
        int a=0;
        while(r>l){
            if(height[l]>height[r]){
                a=height[r]*(r-l);
                amount=max(a,amount);
                r--;
            }else{
                a=height[l]*(r-l);
                amount=max(a,amount);
                l++;
            }
        }
        return amount;
    }
};
