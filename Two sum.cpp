class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int>ans;

        int l=0; 
       int r=nums.size()-1;
        vector<pair<int, int>>v;
        for(int i=0; i<nums.size(); i++)
        {
        v.push_back({nums[i], i});
        }
        sort(v.begin(), v.end());
        while(l<r)
        {
        if(v[l].first+v[r].first==target)
        {
            break;
        }
        else if(v[l].first+v[r].first<target)
        {
            l++;
        }
        else if(v[l].first+v[r].first>target)
        {
            r--;
        }
    }
    ans.push_back(v[l].second);
    ans.push_back(v[r].second);

    return ans;
        
    }
};
