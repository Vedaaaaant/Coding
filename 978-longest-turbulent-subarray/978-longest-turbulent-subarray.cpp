class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) 
    {
        int n = arr.size();
        int l = 1;
        int maxl = 1 ;
        int maxr = 1 ;
        int r = 1 ;
        for(int i = 1 ; i < n ; i++)
        {
          if(i%2 && arr[i]>arr[i-1])
          {
              l++;
          }
          else if(i%2 == 0 && arr[i]<arr[i-1])
          {
              l++;
          }
          else
          {
              l=1;
          }
          maxl = max(l,maxl);
        }
        for(int i = 1 ; i < n ; i++)
        {
          if(i%2 && arr[i]<arr[i-1])
          {
              r++;
          }
          else if(i%2 == 0 && arr[i]>arr[i-1])
          {
              r++;
          }
          else
          {
              r=1;
          }
          maxr = max(r,maxr);
        }
        return max(maxl,maxr);
    }
};