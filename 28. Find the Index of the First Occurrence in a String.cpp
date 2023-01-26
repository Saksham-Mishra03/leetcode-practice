class Solution {
public:
    int strStr(string haystack, string needle) {
        int k= -1;
        if(haystack.size()<needle.size())
        return -1;
        else
        {
        for(int i = 0;i<=(haystack.size()-needle.size());i++)
        {
            if(needle== haystack.substr(i,needle.size()))
            {
                    k= i;
                    break;
            }
    }
        }
        return k;
    }
};
