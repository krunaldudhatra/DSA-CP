class Solution {
public:
    bool isPalindrome(int x) {
        long rev=0;
        int ori = x;
        if(x<0)
        {
            return false;
        }
        while(x!=0)
        {
            int rem = x%10;
            rev=rev*10+rem;
            x=x/10;
        }
        if(rev==ori)
        {
            return true;
        }
        return false;
        
    }
};