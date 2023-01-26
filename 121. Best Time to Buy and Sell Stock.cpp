class Solution {
public:
    int maxProfit(vector<int>& prices) {
     vector<int>v;
     int minl = prices[0];
     int pro;
     
     for(int i = 0;i<prices.size();i++)
     {
         pro = max((prices[i]-minl),pro);
         minl = min(minl,prices[i]);

         
     }
     return pro;
        
    }
};
