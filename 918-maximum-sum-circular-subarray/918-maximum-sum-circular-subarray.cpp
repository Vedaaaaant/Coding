class Solution {
public:
    int kadane(vector<int>& nums)
    {
        int res = nums[0] ;
        int maxending = nums[0];
        for(int i = 1 ; i < nums.size(); i++)
        {
            maxending = max(maxending + nums[i] , nums[i]);
            res = max(maxending,res);
        }
        return res ;
    }
    int maxSubarraySumCircular(vector<int>& nums) 
    {
        int normalsum = kadane(nums);
        if(normalsum < 0)
        {
            return normalsum ;
        }
        int sum = 0 ;
        for(int i = 0 ; i < nums.size(); i++)
        {
            sum += nums[i];
            nums[i] = -nums[i];
        }
        int circularsum = sum + kadane(nums);
        return max(normalsum,circularsum);
    }
};