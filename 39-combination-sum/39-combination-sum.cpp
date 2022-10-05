class Solution {
public:
    void help(int i ,vector<vector<int>>& ans , vector<int>& ds ,vector<int>& arr ,int target)
    {
      if(i==arr.size()){
        if(target==0){
          ans.push_back(ds);
        }
        return ;
      }
      
      if(arr[i]<=target)
      {
        ds.push_back(arr[i]);
        help(i,ans,ds,arr,target-arr[i]);
        ds.pop_back();                                
      }
      help(i+1,ans,ds,arr,target);
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target)
    {
      vector<vector<int>> ans;
      vector<int> ds;
      help(0,ans,ds,arr,target);
      return ans;
    }
};