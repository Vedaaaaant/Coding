class Solution {
public:
    void rotate(vector<int> & ans, int k)
    {
        int n = ans.size();
        k = k % n ;
        reverse(ans.begin(), ans.end());
        reverse(ans.begin(), ans.begin() + k);
        reverse(ans.begin() + k, ans.end());
    }
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) 
    {
        vector<int> ans;
        for(int i = 0 ; i < grid.size() ; i++)
        {
            for(int j = 0 ;  j < grid[0].size() ; j++)
            {
                ans.push_back(grid[i][j]);
            }
        }
        rotate(ans,k);
        int m=0;
        for(int i = 0 ; i < grid.size() ; i++)
        {
          for(int j = 0 ; j < grid[0].size() ; j++)
          {
              grid[i][j] = ans[m];
              m++;
          }
        }
        return grid;
    }
};