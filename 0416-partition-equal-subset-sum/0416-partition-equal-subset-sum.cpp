class Solution {
public:
    bool help(int n , int k , vector<int>& nums)
    {
       vector<vector<bool>> dp(n,vector<bool>(k+1,false));
       for(int i = 0 ; i < n ; i++)
       {
         dp[i][0]=true;   // BASE CASE
       }
      if(nums[0]<=k)
      {
        dp[0][nums[0]]=true;    // BASE CASE
      }
      for(int ind = 1 ; ind < n ; ind++)
      {
        for(int target = 1 ; target <=k ; target++)     // BOTTOM UP DP
        {
          bool nottake = dp[ind-1][target];
          bool take = false;
          if(nums[ind]<=target){
            take = dp[ind-1][target-nums[ind]];
          }
          dp[ind][target] = take || nottake ;
        }
      }
      return dp[n-1][k];
    }
    bool canPartition(vector<int>& nums)
    {
      int sum = 0;
      for(int i = 0 ; i < nums.size() ; i++)
      {
        sum += nums[i];
      }
      if(sum%2 != 0){
        return false;
      }
      sum = sum/2 ;
      int n = nums.size();
      return help(n,sum,nums);
    }
};