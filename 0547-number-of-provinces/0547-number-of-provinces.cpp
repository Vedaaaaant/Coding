class Solution {
public:
    void dfs(int node , vector<int> adjls[] , int vis[])
    {
      vis[node] = 1;
      for(auto it : adjls[node])
      {
        if(!vis[it])
        {
           dfs(it,adjls,vis);
        }
      }
    }
    int findCircleNum(vector<vector<int>>& adj) 
    {
      int V = adj.size();
      vector<int> adjls[V];
      for(int i = 0 ; i < V ; i++)
      {
        for(int j = 0 ; j < V ; j++)
        {
          if(i!=j && adj[i][j]==1)
          {
            adjls[i].push_back(j);
            adjls[j].push_back(i);
          }
        }
      }
      int vis[201];
      for(int i = 0 ; i <V ; i++)
      {
        vis[i] = 0 ;
      }
      int count = 0 ;
      for(int i = 0 ; i < V ; i++)
      {
        if(!vis[i])
        {
          count++;
          dfs(i,adjls,vis);
        }
      }
      return count ;
    }
};