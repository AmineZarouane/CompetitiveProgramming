class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long pre=0,ans=-1e18,mn=0;
        for(int i=0;i<(int)nums.size();i++){
            pre+=nums[i];
            ans=max(ans,pre-mn);
            mn=min(pre,mn);
        }
        return ans;
    }
};