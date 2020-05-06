class Solution {
public:
    unordered_map<int,int> cnt;
    int majorityElement(vector<int>& nums) {
        int n = (int)nums.size();
        int ret;
        for(auto x : nums)
            if (++cnt[x] > n / 2)
                ret = x;
        return ret;
    }
};