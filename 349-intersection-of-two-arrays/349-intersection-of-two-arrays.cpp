class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      unordered_set<int> s(nums1.begin(),nums1.end());
        vector<int> ans;
        for(int j = 0 ; j < nums2.size();j++)
        {
            if(s.find(nums2[j]) != s.end())
            {
                ans.push_back(nums2[j]);
                s.erase(nums2[j]);
            }
        }
        return ans ;
        
    }
};