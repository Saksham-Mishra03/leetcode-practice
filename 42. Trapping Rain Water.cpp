class Solution {
public:
    int trap(vector<int>& height) {
        int n = (int)height.size();
        vector<int>l(n);
        vector<int>r(n);
        l[0] = height[0];
        r[n-1] = height[n-1];


        for(int i = 1;i<(int)height.size();i++)
        {
            l[i] = max(height[i],l[i-1]);
            
        }
        for(int j = (int)height.size()-2;j>=0;j--)
        {
            r[j] = max(height[j],r[j+1]);
            
        }
        int sum = 0;
        for(int k = 1;k<(int)height.size()-1;k++)
        {
           sum +=   min(l[k],r[k])-height[k];
           
        }
        return sum;
     

        
    }
};
