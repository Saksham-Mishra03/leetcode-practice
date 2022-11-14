#include <vector>
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>rsum;
        for(int i =0; i<nums.size();i++)
        {
            if(i==0)
                rsum.push_back(nums[i]);
            else
            {int s, m=i;
             s=nums[m];
                while(m!=0){
              s=s+nums[m-1];
                    --m;
                    
                    
                }
             rsum.push_back(s);
            }
        }
       return  rsum;
    }
};
