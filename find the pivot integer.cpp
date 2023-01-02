class Solution {
public:
    int pivotInteger(int n) {
        int flag=0,  i;
        for ( i = 1;i<=n;i++)
        {
           int sum1=0,sum2=0;
            sum1= (i*(i+1))/2;
            for(int j = i;j<=n;j++)
                sum2 += j;
            if(sum1==sum2)
            {flag=1;
             break;
            }
        }
        if(flag==1)
            return i;
        else
            return -1;
                 
                
            
        }
    
};
