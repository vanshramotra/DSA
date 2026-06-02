class Solution {
public:
    vector<int> getRow(int rowIndex) {
     int n = rowIndex;
     long long ans = 1;
     vector<int> res;
     res.push_back(ans);
     for(int i=1;i<=n;i++)
     {
          ans = ans *(n-(i-1));
          ans=ans/i;
          res.push_back(ans);
     }
     return res;
    }
};