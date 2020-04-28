class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n = (int)matrix.size();
        int ans = 0 ;
        if (n == 0)
            return ans;
        int m = (int)matrix[0].size();
        int dp[n+1][m+1];
        memset(dp,0,sizeof dp);
        for(int i = 1 ; i <= n ; i++)
            for(int j = 1 ; j <= m ; j++)
                if (matrix[i-1][j-1] == '1')
                    dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]})+ 1,
                    ans = max(ans,dp[i][j]);
        return ans * ans;
    }
};