class Solution
{
public:
  int help(vector<int>& nums)
  {
    int n = nums.size();
    vector<int> dp(n,0);
    dp[0] = nums[0];
    for(int i = 1 ; i <n ; i++)
    {
      int notpick = 0 + dp[i-1];
      int pick = nums[i];
      if(i>1)
      {
        pick += dp[i-2];
      }
      
      dp[i] = max(pick,notpick);
    }
    return dp[n-1];
  }
  int rob(vector<int>& nums)
  {
     vector<int> arr1 ;
     vector<int> arr2 ;
     int n = nums.size();
    if(nums.size()==1){
      return nums[0];
    }
     for(int i = 0 ; i < n ; i++)
     {
       if(i!=0)
       {
         arr1.push_back(nums[i]);
       }
       if(i!=n)
       {
         arr2.push_back(nums[i]);
       }
     }
    int l = help(arr1);
    int r = help(arr2);
    return max(l,r);
  }
};