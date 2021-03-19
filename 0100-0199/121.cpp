class Solution {
public:
    int maxProfit(vector<int>& prices) {
        /*
        //method1:
        int high=prices.back();
        int r=0;
        while(!prices.empty()){
            if(high-prices.back()>r){
                r=high-prices.back();
            }
            if(prices.back()>high){
                high=prices.back();
            }
            prices.pop_back();
        }
        return r;
        */
        /*
        //method 2
        int size=prices.size();
        int lowest=prices[0];
        int maxProfit=0;
        int i=0;
        for(i;i<size;i++){
            if(prices[i]-lowest>maxProfit)
                maxProfit=prices[i]-lowest;
            if(prices[i]<lowest)
                lowest=prices[i];
        }
        
        return maxProfit;
        //but both methods are slow and used too much memory(why?)
        */
        //method 3
        int size=prices.size();
        int low=prices[0];
        int high=prices[0];
        int maxProfit=0;
        for(int i=0;i<size;i++){
            if(prices[i]>high)
                high=prices[i];
            if(prices[i]<low){
                maxProfit=high-low>maxProfit?high-low:maxProfit;
                high=prices[i];
                low=prices[i];
            }
        }
        maxProfit=high-low>maxProfit?high-low:maxProfit;
        return maxProfit;
        
        
        /*method on leetCode: using Kadane's Algorithm 
        int maxCur = 0, maxSoFar = 0;
        for(int i = 1; i < prices.size(); i++) {
            maxCur = max(0, maxCur += prices[i] - prices[i-1]);
            maxSoFar = max(maxCur, maxSoFar);
        }
        return maxSoFar;
        */

    }
};
