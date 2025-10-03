class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minSharePrice = prices[0];

        for (int i = 1; i < prices.size(); i++) {
            int currentProfit = prices[i] - minSharePrice;
            maxProfit = max(currentProfit, maxProfit);
            minSharePrice = min(minSharePrice, prices[i]);
        }
        return maxProfit;
    }
};
