class Solution {
public:
    int countKDifference(vector<int>& nums, int k)
    {
        unordered_map<int,int> mp ;
        int count = 0;
        for(auto i : nums)
        {
            mp[i]++;
        }
        for(auto i : nums)
        {
            if(mp.find(i-k) != mp.end())
            {
                count += mp[i-k];
            }
        }
        return count;
    }
};