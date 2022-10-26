class Solution {
public:
    int lengthOfLIS(vector<int>& nums) 
    {// Base case will be ind == n , but we aren't writing as we have initialized dp with 0
      int n  = nums.size();
      vector<vector<int>> dp(n+1,vector<int>(n+1,0));
      for(int ind = n-1 ; ind>=0 ; ind--)
      {
        for(int prev_ind = ind-1 ; prev_ind>=-1 ; prev_ind--)
        {
          int notTake = 0 + dp[ind+1][prev_ind+1];
          int Take = 0;
          if(prev_ind == -1 || nums[ind] > nums[prev_ind])
          {
            Take =  1 + dp[ind+1][ind+1]; // we match than we have to update the previous index
          }
          dp[ind][prev_ind+1] = max(Take,notTake);
        }
      }
      return dp[0][0];
    } // we have added one to the prev_ind as we are doing coordinate shifting
};
// we have initialized 2D matrix of index and prev_index to maintain the record of previous index