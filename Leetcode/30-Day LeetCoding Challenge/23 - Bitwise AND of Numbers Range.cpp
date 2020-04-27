class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int pre = 0, n = (int)nums.size();
        unordered_map<int,int> cnt ; 
        cnt[0]++;
        int ans = 0;
        for(int i = 0 ; i < n ; i++){
            pre += nums[i];
            ans += cnt[pre - k];
            cnt[pre]++;
        }
        return ans;
    }
};