class Solution {
public:
    int maxArea(vector<int>& height) {
        vector<int>v;
        int max = height[0];
        int mind;
        
        for(int  i = 0;i<height.size();i++)
        {
            if(height[i]>max)
           { max = height[i];
            mind = i;
           }

        }
    
        for(int i = 0;i<height.size();i++)
        {   
            v.push_back((abs(mind-i))*height[i]);

        }
        int mwater = v[0];
           for(int i = 0;i<v.size();i++)
        {
            if(v[i]>mwater)
           { mwater = v[i];
            
           }

        }
        return mwater;


        
    }
};
