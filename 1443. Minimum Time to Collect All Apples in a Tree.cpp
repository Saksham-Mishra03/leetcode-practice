class Solution {
public:

vector<int>adj[100000];
vector<bool>frt;
pair<int,int>dfs(int node,int p )
{
    pair<int,int>v = {0,frt[node]};
    for(auto i : adj[node])
    {
        if(i!=p)
        {
            auto x = dfs(i,node);
            v.first+= (2+x.first)*x.second;
            v.second |= x.second; 
        }
    }
    return v;
}
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        for(int i =0; i<edges.size();i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        frt = hasApple;
        return dfs(0,0).first;
        
    }
};
