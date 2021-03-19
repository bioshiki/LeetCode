class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int avl=0;
        int countOfZero=0;
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i]==0){
                if(i==0)
                    countOfZero=1;
                else
                    countOfZero=0;
                while(i<flowerbed.size()&&flowerbed[i]==0){
                    countOfZero++;
                    i++;
                }
                if(i==flowerbed.size())
                    countOfZero++;
                avl+=(countOfZero-1)/2;
                if(avl>=n)
                    return true;
            }
        }
        if(avl>=n)
            return true;
        return false;
    }
};
