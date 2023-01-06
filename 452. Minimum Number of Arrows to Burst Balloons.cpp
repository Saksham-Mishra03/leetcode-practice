bool cmp(vector<int>&a,vector<int>&b)
{
    return a[1]<b[1];
}

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        
        if(points.size()==0)
        return 0;

        sort(points.begin(),points.end(),cmp);
        int ar=1;
        int end = points[0][1];

        for(int i=1;i<points.size();i++)
        {
            
                if(points[i][0]>end)
                {
                    ar++;
                    end = points[i][1];
                }
        }
            return ar;
        
    }
};
