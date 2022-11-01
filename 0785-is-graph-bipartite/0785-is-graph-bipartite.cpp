class Solution {
public:
    bool check(int start , int color[] ,vector<vector<int>>& graph)
    {
      queue<int> q ;
      q.push(start);
      color[start]=0;
      while(!q.empty())
      {
        int node = q.front();
        q.pop();
        for(auto it : graph[node])
        {
          if(color[it] == -1)
          {
            color[it] = !color[node];
            q.push(it);
          }
          else if(color[it]==color[node])
          {
            return false;
          }
        }
      }
      return true;
    }
    bool isBipartite(vector<vector<int>>& graph)
    {
      int V = graph.size();
      int color[101];
      for(int i = 0 ; i < V ; i++)
      {
        color[i] = -1 ;
      }
      for(int i = 0 ; i<V ; i++)
      {
        if(color[i]==-1)
        {
          if(check(i,color,graph)==false)
         {
           return false;
         }
        }
      }
      return true;
    }
};