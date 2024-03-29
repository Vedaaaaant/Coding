class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mpp(256,-1);
        int right = 0 , left = 0 , len = 0 ;
        int n = s.size();
        while(right<n){
            if(mpp[s[right]] != -1){
                left = max(left,mpp[s[right]]+1);
            }
            mpp[s[right]] = right;
            len = max(len,right-left+1);
            right++;
        }
        return len;
    }
};