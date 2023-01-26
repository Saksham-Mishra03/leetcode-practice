class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int x;
        for(int i=0; i<nums.size();i++)
        {
            if(nums.at(i)>=target)
            {x=i;
            break;
            }
        }
        return x;
    }
};
