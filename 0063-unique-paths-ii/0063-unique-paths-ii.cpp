class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid)
    {
      int n = grid.size();
      int m = grid[0].size();
      if(grid[0][0]==1 || grid[n-1][m-1])
      {
        return 0 ;
      }
      vector<vector<int>> dp(n,vector<int>(m,0));
      for(int i = 0 ; i < n ; i++)
      {
        for(int j = 0 ; j < m ;j++)
        {
          if(i==0 && j==0)
          {
            dp[i][j] = 1 ;
            continue;
          }
           if(grid[i][j]==1)
          {
            dp[i][j] = 0;
            continue;
          }
            int up = 0 ;
            if(i>0)
            {
              up = dp[i-1][j];
            }
            int down = 0 ;
            if(j>0)
            {
              down = dp[i][j-1];
            }
            dp[i][j] = up+down ;
          
        }
      }
      return dp[n-1][m-1];
    }
};