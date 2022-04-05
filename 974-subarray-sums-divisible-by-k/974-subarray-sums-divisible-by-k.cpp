class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k)
    {
        int pre = 0 ;
        vector<int> temp(k);
        int res = 0 ;
        temp[0] = 1 ;
        for(int x : nums)
        {
            //temp[pre]++;
            pre = (pre + x%k + k)%k;
            res += temp[pre];
            temp[pre]++;
        }
        return res;
    }
};