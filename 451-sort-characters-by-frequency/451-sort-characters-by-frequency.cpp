class Solution {
public:
    string frequencySort(string s) {
        string ans = "";
        unordered_map<char,int> mp ;
        for(auto i : s)
        {
            mp[i]++;
        }
        priority_queue<pair<int,char>> pq ;
        for(auto i : mp)
        {
            pq.push({i.second,i.first});
        }
        while(!pq.empty())
        {
            ans += string(pq.top().first,pq.top().second); // learning string(count,char) this function prints char by multiplying with count ... leetcode comments.
            pq.pop();
        }
        return ans;
    }
};

