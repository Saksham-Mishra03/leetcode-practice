class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& st) {
        sort(st.begin(),st.end());
         


            int tar ;
            int a,b,c;
            int l,r;
           
            vector<vector<int>>v;
         for(int i = 0;i<st.size();i++)
        {
            tar = 0;
            a = st.at(i);

              if(i > 0 && st[i] == st[i - 1]){   
                continue;
              }
            l = i+1;
            r = st.size()-1;
            
            while(l<r)
            {
                tar = a+st[l]+st[r];
               if(tar>0)
               {
                   r--;
               }
               else if(tar<0)
               {
                   l++;
               }
               else
               {
                   v.push_back({a,st[l],st[r]});

                     while(l<r && st[l]==st[l+1])
                      l++;
                while(l<r && st[r]== st[r-1])
                 r--;

                l++;
                r--;

                  
               }


            }


        }    
        return v;    
    }
};
