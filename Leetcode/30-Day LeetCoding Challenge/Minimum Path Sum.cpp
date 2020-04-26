class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = (int) grid.size();
        if (!n)
            return 0;
        int m = (int) grid[0].size();
        long long dp[n+1][m+1];
        for(int i=0;i<=n;i++)
            for(int j=0;j<=m;j++)
                dp[i][j]=1e18;
        dp[0][0] = 0; 
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if (i)
                    dp[i][j] = min(dp[i-1][j],dp[i][j]);
                if (j)
                    dp[i][j] = min(dp[i][j-1],dp[i][j]);
                dp[i][j]+=grid[i][j];
            }
        }
        return dp[n-1][m-1];
    }
};