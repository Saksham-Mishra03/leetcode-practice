class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==1)
        return nums[0];
        if(nums[0]<nums[nums.size()-1])
        return nums[0];
        int ans = INT_MAX;
        int l = 0;
        int h = nums.size()-1;
        while(l<=h)
        {
            int m = (l+h)/2;
            if(nums[m]>=nums[0])
            l = m+1;
            else
            {
            ans = min(ans,nums[m]);
            h=m-1;
            }

        }
        return ans;
        

        
    }
};
