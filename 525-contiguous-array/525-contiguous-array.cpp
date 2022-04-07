class Solution {
public:
    int findMaxLength(vector<int>& nums) 
    {
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i] == 0 )
                nums[i] = -1;
        }
        int res = 0 ;
        unordered_map<int,int> m ;
        int pre = 0 ;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            pre += nums[i];
            if(pre == 0)
                res = i+1;
            if(m.find(pre) == m.end())
                m.insert({pre,i});
            if(m.find(pre) != m.end())
                res = max(res , i - m[pre]);
        }
        return res;
    }
};