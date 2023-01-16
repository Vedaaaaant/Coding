//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b)
    {
        unordered_map<char,int> mp ;
        int n = a.size();
        int m = b.size();
        if(n != m)
        {
            return false ;
        }
        for(int i = 0 ; i < n ; i++)
        {
            mp[a[i]]++;
            mp[b[i]]--;
        }
        for(int i = 0 ; i < mp.size() ; i++)
        {
            if(mp[i] != 0)
            {
                return false;
            }
        }
        return true;
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends