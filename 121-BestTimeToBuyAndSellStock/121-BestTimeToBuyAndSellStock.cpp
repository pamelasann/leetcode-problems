// Last submission: 11/24/2023, 3:34:26 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 1)
            return 0; // only one value, no profit
        int l = 0;
        int r = 1;
        int maxP = 0;
        while(r < prices.size()) {
            if(prices[l] < prices[r]) {
                int currentProfit = prices[r] - prices[l];
                maxP = max(maxP, currentProfit);
            }
            else 
                l = r;
            r++;
        }
        return maxP;
    }
};