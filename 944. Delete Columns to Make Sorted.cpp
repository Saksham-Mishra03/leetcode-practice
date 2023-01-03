class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count = 0;
        for(int i = 0;i<(strs.front()).length();i++)
        {
        
            vector<int>v;
            for(int j = 0;j<strs.size();j++)
            {
                    v.push_back(strs[j][i]);
            }
            for(int k = 0;k<v.size()-1; k++)
            {
                if(v[k]>v[k+1])
                {count++;
                break;
                }
            }
        }
        return count;
    }
};
