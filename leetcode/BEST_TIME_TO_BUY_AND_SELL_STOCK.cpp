class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX;
        int index = 0;
        int new_buy =0;
        for(int i =0; i< prices.size(); i++)
        {
            new_buy = min(prices[i], buy);
            index = i;
        }
        
        int profit = 0;
        
        for(int j=index; j< prices.size(); j++)
        {
            new_profit = prices[j]-profit; 
        }
    }
};