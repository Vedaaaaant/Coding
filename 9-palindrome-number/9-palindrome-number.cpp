class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x<0)
        {
            return false;
        }
        int temp = x ;
        int rem = 0 ;
        long long  rev = 0 ;
        while(temp != 0)
        {
            rem = temp %10 ;
            rev = rev*10+rem;
            temp = temp/10;
        }
        return rev==x ;
    }
};