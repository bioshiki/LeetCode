//method 1:
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> r;
        for(int i=0,j=numbers.size()-1;i<j;){
            int sum=numbers[i]+numbers[j];
            if(sum==target){
                r.push_back(i+1);
                r.push_back(j+1);
                return r;
            }
            if(sum>target)
                j--;
            else
                i++;
            
        }
        return r;
    }
};

/*
//method 2: use map
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int,int> m;
        vector<int> r;
        for(int i=0;i<numbers.size();i++){
            if(m[target-numbers[i]]!=0){
                r.push_back(m[target-numbers[i]]);
                r.push_back(i+1);
                return r;
            }
            m[numbers[i]]=i+1;
        }
        return r;
    }
};

*/
