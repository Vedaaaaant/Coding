class Solution {
public:
    int findNumberOfLIS(vector<int>& nums)
    {
      int n = nums.size();
      vector<int> dp(n,1);
      vector<int> curr(n,1);
      int maxi = 1 ;
      for(int i = 0 ; i < n ; i++)
      {
        for(int prev = 0 ; prev < i ; prev++)
        {
          if(nums[prev]<nums[i] && dp[prev] + 1 > dp[i])
          {
            dp[i] = 1 + dp[prev];
            curr[i] = curr[prev];
          }
          else if(nums[prev]<nums[i] && dp[prev] + 1 == dp[i])
          {
            curr[i] += curr[prev];
          }
        }
        maxi = max(maxi,dp[i]);
      }
    int nos =0;
    
    for(int i=0; i<=n-1; i++){
       if(dp[i]==maxi) nos+=curr[i];
    }
    
    return nos;
    }
};