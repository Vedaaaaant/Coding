class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int maxdiff = 0;
        int minVal = prices[0];
        for(int i = 1 ; i < prices.size() ; i++)
        {
            maxdiff = max(maxdiff,prices[i]-minVal);
            minVal = min(minVal,prices[i]);
        }
        
        return maxdiff;
    }
};