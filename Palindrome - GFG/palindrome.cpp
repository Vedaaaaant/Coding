// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    int temp = n ;
		    int rev = 0 ;
		    int rem = 0 ;
		    while(temp != 0)
		    {
		        rem = temp%10;
		        rev = rev*10 + rem;
		        temp = temp/10;
		    }
		    string x = "Yes";
		    string y = "No";
		    if(rev==n)
		    {
		        return x;
		    }
		    else
		    {
		        return y;
		    }
		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}
  // } Driver Code Ends