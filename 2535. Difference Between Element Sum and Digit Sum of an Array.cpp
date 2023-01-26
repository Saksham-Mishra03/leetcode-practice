class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
       int  esum = 0,dsum = 0;
        for(int i = 0; i<nums.size();i++)
        {
            esum += nums[i];
            int n = nums[i],digit;
            while(n!=0)
            {
                digit = n%10;
                n = n/10;
                dsum += digit;
            }
            
        }
        return abs(esum - dsum);
        
    }
};
