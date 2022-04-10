class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        // vector<int> v;
        // stack<int>s;
        // int pre = 0 ;
        // int n = nums2.size();
        // s.push(nums2[n-1]);
        // v.push_back(-1);
        // for(int i = n-2 ; i >= 0 ; i--)
        // {
        //     if(s.size() != 0 && s.top() <= nums2[i])
        //     {
        //         s.pop();
        //     }
        //     pre = s.empty() ? -1 : s.top();
        //     v.push_back(pre);
        //     s.push(nums2[i]);
        // }
        // reverse(v.begin(),v.end());
        // for(int i = 0 ; i < nums1.size() ; i++)
        // {
        //     if(nums1[i] == )
        // }
         map<int,int>m1; 
         stack<int>st;
         int n=nums2.size();
         for(int i=n-1;i>=0;i--)
         {
            while(!st.empty() && st.top()<nums2[i]){
                  st.pop();
              }

              if(st.empty()){
                  m1[nums2[i]]=-1;
              }

              else{
                  m1[nums2[i]]=st.top();
              }

              st.push(nums2[i]);
         }
        vector<int>ans;
        for(auto i:nums1)
        {
            ans.push_back(m1[i]);
        }
         return ans;
        }
            
};