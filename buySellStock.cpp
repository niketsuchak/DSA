class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        if (prices.empty()) return 0;

        int profit = 0;
        int buy = prices[0];

        for (int i = 1; i < prices.size(); i++) {
            int sell = prices[i];
            if (sell > buy) {
                profit = max(profit, sell - buy);
            } else {
                buy = sell;
            }
        }

        return profit;
    }
};
