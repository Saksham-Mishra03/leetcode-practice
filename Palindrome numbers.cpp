class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        else{
        
        long num = x;
        long digit,n=0;
        while(num!=0)
        {
digit = num%10;
            num = num/10;
            n = n*10+digit;
        }
        
        if(n==x)
            return true;
        else 
            return false;
    }
    }
};
