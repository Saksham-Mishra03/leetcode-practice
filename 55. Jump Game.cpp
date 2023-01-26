class Solution {
public:
    bool canJump(vector<int>& nums) {

        int reach = nums.size()-1;
    for(int i = reach-1;i>=0;i--)
    {
        if(nums[i]>=reach-i)
        reach = i;
    }

    if(reach==0)
    return true;
    else
    return false;
        
    }
};
