class Solution {
public:
    int mySqrt(int x) {
        int t;

        for(long long  i =0; i<=(x/2)+1;i++)
        {
            if(i*i==x)
            {
                t = i;
                break;
            }
            if(i*i>x)
            {
                t=i-1;
                break;
            }
        }
        return t;
    }
};
