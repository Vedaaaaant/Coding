//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
   
   static bool mycmp(Item a , Item b)
    {
        double r1 = (double)a.value / (double)a.weight ;
        double r2 = (double)b.value / (double)b.weight ;
        return r1>r2 ;
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        double res = 0.0 ;
        int currWeight = 0 ;
        sort(arr,arr+n,mycmp);
        for(int i = 0 ; i < n ; i++)
        {
            if(currWeight + arr[i].weight <= W)
            {
                res = res + arr[i].value;
                currWeight += arr[i].weight;
            }
            else
            {
                int remain = W - currWeight;
                res = res + (double)arr[i].value/(double)arr[i].weight*(double)remain;
                break;
            }
        }
        return res;
    }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends