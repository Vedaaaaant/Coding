class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> temp ;
        unordered_map<int,int> mp;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(mp.find(target-nums[i]) != mp.end())
            {
                temp.push_back(mp[target-nums[i]]);
                temp.push_back(i);
                return temp; 
            }
            mp[nums[i]] = i ;
        }
        return temp;
    }
};