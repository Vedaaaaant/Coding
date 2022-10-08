class Solution {
public:
   vector<int> nextSmallerElement(vector<int>& arr , int n)
    {
        vector<int> ans;
        stack<int> s ;
        int l = n-1;
        s.push(l);
        ans.push_back(-1);
        for(int i = n-2 ; i>=0 ; i--)
        {
            while(s.empty()==false && arr[s.top()] >= arr[i])
            {
                s.pop();
            }
            int ns = s.empty() ? -1 : s.top();
            ans.push_back(ns);
            s.push(i);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    vector<int> previousSmallerElement(vector<int>& arr , int n)
    {
        vector<int> ans;
        stack<int> s ;
        s.push(0);
        ans.push_back(-1);
        for(int i = 1 ; i<n ; i++)
        {
            while(s.empty()==false && arr[s.top()] >= arr[i])
            {
                s.pop();
            }
            int ns = s.empty() ? -1 : s.top();
            ans.push_back(ns);
            s.push(i);
        }
        return ans;
    }
    int largestRectangleArea(vector<int>& heights)
    {
        int n = heights.size();
        
        vector<int> next(n);
        next = nextSmallerElement(heights, n);
            
        vector<int> prev(n);
        prev = previousSmallerElement(heights, n);
        
         int area = INT_MIN;
        for(int i=0; i<n; i++) {
            int l = heights[i];
            
            if(next[i] == -1) {
                next[i] = n;
            }
             int b = next[i] - prev[i] - 1;
            int newArea = l*b;
            area = max(area, newArea);
        }
        return area;
    }
};