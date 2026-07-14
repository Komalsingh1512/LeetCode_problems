class Solution {
public:
    int maxProfit(vector<int>& prices) {
// hame aise din kharidna hai jo sabse kam price ho or bechna aise din hai jis din price sabse max ho 
        int minPrice = prices[0]; //7
        int maxProfit = 0;

        for(int i = 1; i < prices.size(); i++) { //1,5,3,6,4
            //remember the logic no other option, try with dry run 
            minPrice = min(minPrice, prices[i]);
            int profit = prices[i] - minPrice;// we are calculating the profit
            maxProfit = max(maxProfit, profit);
        }

        return maxProfit;
    }
};