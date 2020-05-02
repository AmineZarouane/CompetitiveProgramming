class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int n = (int)candies.size(),mx  = 0;
        for(int i = 0 ; i < n ; i++)
            mx = max(candies[i],mx);
        for(int i = 0 ; i < n ; i++)
            ans.push_back(extraCandies + candies[i] >= mx);
        return ans;
    }
};