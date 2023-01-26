class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>v(nums.size());

        for(int i = 0;i<(int)nums.size();i++)
        {
            v[i] = 0;
        }
        for(int i = 0;i<(int)nums.size();i++)
        {
            int t = (i+k)%nums.size();
            v[t] = nums[i];
        }

         for(int i = 0;i<(int)v.size();i++)
        {
            nums[i] = v[i];
        }
    }
};
