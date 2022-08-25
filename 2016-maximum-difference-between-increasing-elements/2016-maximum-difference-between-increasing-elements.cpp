class Solution {
public:
    int maximumDifference(vector<int>& nums)
    {
        int ans = nums[1] - nums[0];
        int minVal = nums[0];
        for(int j = 1 ; j < nums.size() ; j++)
        {
            ans = max(ans,nums[j]-minVal);
            minVal = min(minVal,nums[j]);
        }
        if(ans<=0)
            return -1;
        return ans;
            
    }
};