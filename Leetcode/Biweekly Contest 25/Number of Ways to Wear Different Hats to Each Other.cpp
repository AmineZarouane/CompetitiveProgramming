const int mod = 1e9 + 7;
const int N = 40;
class Solution {
public:
    vector<int> g[N];
    int dp[N][1 << 10];
    int n;
    int solve(int idx = 0,int mask = 0){
        if (idx >= N)
            return mask == (1 << n) - 1;
        int& r = dp[idx][mask];
        if (~r)
            return r;
        r = solve(idx + 1, mask);
        for(auto x : g[idx])
            if (((1 << x) & mask) == 0)
                r = (r + solve(idx + 1,mask | (1 << x))) % mod;
        return r;
    }
    int numberWays(vector<vector<int>>& hats) {
        n = (int)hats.size();
        memset(dp,-1,sizeof dp);
        for(int i = 0 ; i < n ; i++)
            for(auto x : hats[i])
                g[x - 1].push_back(i);
        return solve();
    }
};