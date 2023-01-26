class Solution {
public:
    int alternateDigitSum(int n) {
        string x = to_string(n);
        int i = x.size();
        int digit;
        int sum =0;
        while(n!=0)
        {
            digit= n%10;
            if(i%2==0)
                sum -= digit;
            else
                sum += digit;
            n=n/10;
            i++;
        }
        return sum;
    }
};
