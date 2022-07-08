class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int res = 0 ;
        int curr = 0 ;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++)
        {
            if(nums[i] == 1)
            {
                curr++;
                res = max(curr,res);
            }
            else
            {
                curr = 0;
            }
        }
        res = max(curr,res);
        return res;
    }
};