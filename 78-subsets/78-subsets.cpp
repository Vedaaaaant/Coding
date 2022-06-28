class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<int> ans ;
        vector<vector<int>> temp ;
        int n = nums.size();
        int limit = pow(2,n);
        for(int counter = 0 ; counter < limit ; counter++)
        {
            ans.clear();
            for(int j = 0 ; j < n ; j++)
            {
                if((counter & (1<<j)) != 0)
                {
                    ans.push_back(nums[j]);
                }
            }
            temp.push_back(ans);
        }
        return temp;
    }
};