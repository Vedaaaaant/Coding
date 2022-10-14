class Solution
{
public:
  int help(vector<int>& nums)
  {
    int n = nums.size();
    int prev  = nums[0] ;
    int prev2 = 0 ;
    for(int i = 1 ; i < n ; i++)
    {
        int take , notake ;
        take = nums[i] ;
        if(i>1){
            take += prev2;
        }
        notake = 0 + prev;
        int curi  = max(take,notake);
        prev2 = prev;
        prev = curi;
    }
    return prev;
  }
  int rob(vector<int>& nums)
  {
     vector<int> arr1 ;
     vector<int> arr2 ;
     int n = nums.size();
    if(nums.size()==1){
      return nums[0];
    }
     for(int i = 0 ; i < n ; i++)
     {
       if(i!=0)
       {
         arr1.push_back(nums[i]);
       }
       if(i!=n)
       {
         arr2.push_back(nums[i]);
       }
     }
    int l = help(arr1);
    int r = help(arr2);
    return max(l,r);
  }
};