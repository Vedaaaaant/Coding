class Solution {
public:
    int maxProfit(vector<int>& Arr)
    {
      int n = Arr.size();
      vector<vector<int>> dp(n+1,vector<int>(2,0));
      dp[n][0] = dp[n][1] = 0;  // 0 means buy 1 means sell
      int profit = 0 ;
      for(int ind= n-1; ind>=0; ind--)
      { // as in recursion we start from n = 1 so in dp we start from backside;
            for(int buy=0; buy<=1; buy++)
            {
                if(buy==0){// We can buy the stock
                    profit = max(0+dp[ind+1][0], -Arr[ind] + dp[ind+1][1]); 
                }// we have taken negative sign as to find profit we do sell - buy

                if(buy==1){// We can sell the stock
                    profit = max(0+dp[ind+1][1], Arr[ind] + dp[ind+1][0]);
                }

                dp[ind][buy]  = profit;
            }
        }
        return dp[0][0]; // answer will be stored in the first index only
    }
};