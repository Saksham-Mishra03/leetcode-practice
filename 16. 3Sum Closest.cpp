class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());


        int sum = 0;
        int mini = INT_MAX;
        int ans;
        for(int i =0;i<nums.size()-1;i++ )
        {

            int l = i+1;
            int h = nums.size()-1;

            while(l<h)
            {
                sum = nums[i]+nums[l]+nums[h];

                if(sum==target)
                {
                    ans = sum;
                    break;
                }

               int dif = abs(sum-target);
               if(dif<mini)
               {
                   mini = dif;
                   ans = sum;
               }
               if(sum>target)
               {
                   h--;
               }
               else
               l++;




            }


        }
        return ans;
    }
};
