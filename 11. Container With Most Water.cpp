class Solution {
public:
    int maxArea(vector<int>& height) {
    int l = 0;
    int r = height.size()-1;
    int maxw = 0;
    while(r>l)
    {
        maxw = max(maxw,((r-l)*(min(height[l],height[r]))));
        if(height[l]<height[r])
        l++;
        else
        r--;
    }
    return maxw;
        
    }
};
