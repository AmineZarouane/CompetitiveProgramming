const int N = 1e3 +5;
class Solution {
public:
    int dp[N][N];
    int longestCommonSubsequence(string text1, string text2) {
        int n = (int)text1.size();
        int m = (int)text2.size();
        for(int i = 1 ; text1[i-1] ; i++)
            for(int j = 1 ; text2[j-1] ; j++)
                if (text1[i-1] == text2[j-1])
                    dp[i][j] = dp[i-1][j-1] + 1;
                else
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        return dp[n][m];
    }
};