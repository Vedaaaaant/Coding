class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int,int> m ;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            m[nums[i]]++;
        }
        priority_queue<pair<int,int>>pq ;
        for(auto [a,b] : m)
        {
            pq.push({b,a});
        }
        vector<int> v ;
        
        while(k)
        {
            v.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return v ;
    }
};