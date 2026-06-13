class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int bestBuy = prices[0];
        for(int i=1;i<n;i++){
            if(prices[i]>bestBuy){
                profit = max(profit, prices[i]-bestBuy);
            }
            bestBuy = min(prices[i],bestBuy);
        }
        return profit;
    }
};
