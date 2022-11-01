class Solution {
public:
    bool check(int node,int col , int color[] , vector<vector<int>>& graph)
    {
      color[node] = col ;
      for(auto it : graph[node])
      {
        if(color[it]==-1){
          if(check(it,!col,color,graph)==false)
            return false;
        }
        else if(color[it] == color[node]){
            return false;
        }
      }
      return true;
    }
    bool isBipartite(vector<vector<int>>& graph) 
    {
      int V = graph.size();
      int color[201];
      for(int i = 0 ; i < V ; i++)
      {
        color[i]= -1;
      }
      int col = 0 ;
      for(int i = 0 ; i < V ; i++)
      {
        if(color[i]==-1)
        {
           if(check(i,col,color,graph)== false)
          {
            return false;
          }
        }
      }
      return true;
    }
};