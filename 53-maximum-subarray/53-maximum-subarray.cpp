class Solution 
{
public:
    int maxSubArray(vector<int>& nums)
    {
        int maxending = nums[0];
        int res = nums[0];
        int n = nums.size();
        for(int i = 1 ; i < n ; i++)
        {
            maxending = max(maxending+nums[i],nums[i]);
            res = max(res,maxending);
        }
        return res;
    }
};


