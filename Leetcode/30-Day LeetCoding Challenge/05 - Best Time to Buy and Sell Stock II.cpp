class Solution {
public:
    int n,dp[1000005][2];
    int solve(int idx,bool ok,vector<int>& prices){
        if (idx>=n)
            return 0;
        int &r=dp[idx][ok];
        if (~r)
            return r;
        if (ok)
            r=solve(idx+1,0,prices)+prices[idx];
        else
            r=solve(idx+1,1,prices)-prices[idx];
        return r=max(r,solve(idx+1,ok,prices));
    }
    int maxProfit(vector<int>& prices) {
        n=(int)prices.size();
        memset(dp,-1,sizeof(dp));
        return solve(0,0,prices);
    }
};