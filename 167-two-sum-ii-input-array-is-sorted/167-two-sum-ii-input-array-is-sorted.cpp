class Solution {
public:
    vector<int> twoSum(vector<int>& A, int target) 
    {
      int start = 0 ;
      int end = A.size()-1;
      vector<int> ans ;
      while(start<end)
      {
        if(A[start]+A[end] == target)
        {
          ans.push_back(start+1);
          ans.push_back(end+1);
          return ans;
        }
        else if(A[start]+A[end] > target)
        {
          end--;
        }
        else
        {
          start++;
        }
      }
      return ans;
    }
};