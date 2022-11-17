//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int,int> mp ;
        int res = 0;
        int psum = 0 ;
        for(int i = 0 ; i < n ; i++)
        {
          psum += A[i];
          if(psum == 0)
          {
              res = i+1;
          }
          if(mp.find(psum) == mp.end())
          {
              mp.insert({psum,i});
          }
          if(mp.find(psum) != mp.end())
          {
              res = max(res,i-mp[psum]);
          }
        }
        return res;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends