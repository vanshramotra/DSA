class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int m = g.size();
        int n = s.size();
        if(n==0) return 0;
        int l = 0, r = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        while (l < m && r < n) {
            if (s[r] >= g[l]) {
                l = l + 1;
            }
            r = r + 1;
        }
        return l;
    }
};