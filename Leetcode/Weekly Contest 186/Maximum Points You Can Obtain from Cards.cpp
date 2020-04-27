class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = (int)cardPoints.size();
        int p = n-k;
        int sum = 0;
        for(int i = p ; i < n ; i++)
            sum += cardPoints[i];
        int ans = sum;
        for(int i = 0 ; i < k ; i++){
            sum += cardPoints[i] - cardPoints[p++];
            ans = max(ans,sum);
        }
        return ans;
    }
};