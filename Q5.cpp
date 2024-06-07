class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int min_price = prices[0];
        int max_profit = 0;

        for (int i = 1; i < prices.size(); ++i)
        {
            int profit = prices[i] - min_price; // profit on that day

            max_profit = max(max_profit, profit); // comparing current and earlier max

            min_price = min(min_price, prices[i]); // comparing current and ealier min
        }

        return max_profit;
    }
};