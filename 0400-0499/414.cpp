//method 1: using deque to store three maxium number
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int size=nums.size();
        if(size==1)
            return nums[0];
        deque<int> array(1,nums[0]);
	//set up the deque for first three distinct number
        int count=1;
        int i=0;
        while(count<3&&i<size){
            if(nums[i]<array[0]){
                array.push_front(nums[i]);
                count++;
            }else if(nums[i]>array[count-1]){
                array.push_back(nums[i]);
                count++;
            }
            if(count==2&&nums[i]>array[0]&&nums[i]<array[1]){
                count++;
                array.push_back(array[1]);
                array[1]=nums[i];
            }
            i++;
        }
	//if less than 3, return maxium
        if(count!=3)
            return array[count-1];
        for(int j=i;j<size;j++){
            if(nums[j]>array[0]){
                if(nums[j]>array[2]){
                    array.push_back(nums[j]);
                    array.pop_front();
                }else if(nums[j]>array[1]&&nums[j]<array[2]){
                    array[0]=array[1];
                    array[1]=nums[j];
                }else if(nums[j]<array[1]){
                    array[0]=nums[j];
                }
            }
        }
        return array[0];
    }
};
