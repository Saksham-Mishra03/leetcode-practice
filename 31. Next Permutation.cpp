class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int x=-1;
        int y;

    for(int i=nums.size()-2;i>=0;i--)
    {
        if(nums[i]<nums[i+1])
        {
            x = i;
            break;
        }

    }    
    for(int i=nums.size()-1; i>x && x!=-1;i--)
    {
        if(nums[i]>nums[x])
        {
           swap(nums[i],nums[x]);
           break;
        }
    }
    reverse(nums.begin()+x+1,nums.end());
    
    }
};
