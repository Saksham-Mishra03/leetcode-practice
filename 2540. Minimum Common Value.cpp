class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums1.size()+nums2.size();
        set<int>s1;
                set<int>s2;

        for(int i = 0; i<nums1.size();i++)
        {
            s1.insert(nums1[i]);
        }
        for(int i = 0; i<nums2.size();i++)
        {
            s2.insert(nums2[i]);
        }
        
        for(auto i :s1)
        {
            if(s2.find(i) != s2.end())
                return i;
        }
        
        return -1;
        
    }
};
