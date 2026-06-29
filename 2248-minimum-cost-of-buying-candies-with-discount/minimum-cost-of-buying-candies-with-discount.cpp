class Solution {
public:
    int minimumCost(vector<int>& cost) {
      int n = cost.size();
      int count = 0;
      int mincost = 0;
      if(n==1) return cost[0];
      if(n==2) return cost[0]+cost[1];
      sort(cost.begin(),cost.end());
      for(int i = n-1;i>=0;i--)
      {
        count++;
        if(count==3){
            count = 0;
            continue;
        }
        mincost += cost[i];

      }  
      return mincost;
    }
};