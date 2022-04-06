// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x)
    {
       vector<int> ans;
       priority_queue<pair<int,int>> p;
       for(int i=0; i<n; i++)
       {
           int t=abs(arr[i]-x);
           if(t!=0)
           p.push({t, -1*arr[i]});
           if(p.size()>k)
               p.pop();
        }
       while(p.size()>0)
       {
           int z=p.top().second;
           ans.push_back(-1*z);
           p.pop();
           
        }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> k >> x;
        Solution ob;
        auto ans = ob.printKClosest(arr, n, k, x);
        for (auto e : ans) {
            cout << e << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends