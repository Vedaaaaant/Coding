class Solution {
public:
    int fillCups(vector<int>& amount) 
    {
        priority_queue<int> pq;
        int ans = 0 ;
        for(auto i : amount)
        {
            pq.push(i);
        }
        while(pq.top() != 0)
        {
            int p = pq.top();
            pq.pop();
            int q = pq.top();
            pq.pop();
            p--;
            q--;
            pq.push(p);
            pq.push(q);
            ans++;
        }
        return ans;
    }
};