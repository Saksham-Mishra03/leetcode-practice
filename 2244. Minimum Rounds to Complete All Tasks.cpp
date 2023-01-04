class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int>m;
        for(int  i = 0;i<tasks.size();i++)
        {
            m[tasks[i]]++;
        }
        int mini = 0;
        for(auto i:m)
        {
            if(i.second==1)
            return -1;

            int count = 0;
            while(i.second>3)
            {
            i.second = i.second- 3;
            count++;
            }
            if(i.second)
            count++;
            mini += count;
        }
        return mini;
        
    }
};
