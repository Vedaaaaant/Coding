class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
       vector<int> ans;
       int n = nums.size();
       unordered_map<int,int> m;
       for(auto i : nums)
       {
           m[i]++;
       }
       for(auto e : m)
       {
           if(e.second > n/3)
               ans.push_back(e.first);
       }
       return ans; 
    }
};