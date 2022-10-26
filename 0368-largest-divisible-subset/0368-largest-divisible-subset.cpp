class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums)
    {
      int n = nums.size();
      sort(nums.begin(),nums.end());
      vector<int> dp(n,1);
      vector<int> hash(n,1);
    
      for(int i = 0 ; i < n ; i++)
      {
        hash[i] = i;
        for(int prev_ind = 0 ; prev_ind < i ; prev_ind++)
        {
          if(nums[i] % nums[prev_ind] == 0  && 1+dp[prev_ind] > dp[i])
          {
            dp[i] = 1+dp[prev_ind];
            hash[i] = prev_ind;
          }
        }
      }
      int ans = -1;
      int lastindex = -1 ;
      for(int i = 0 ; i < n ; i++)
      {
        if(dp[i]>ans)
        {
          ans = dp[i];
          lastindex = i;
        }
      }
    vector<int> temp;
    temp.push_back(nums[lastindex]);
      while(hash[lastindex] != lastindex)
      {
        lastindex = hash[lastindex];
        temp.push_back(nums[lastindex]);
      }
      reverse(temp.begin(),temp.end());
      return temp;
    }
};