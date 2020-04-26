class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = (int)nums.size();
        int ans = 0,pre = 0;
        map<int,int> m;
        m[0]=-1;
        for(int i=0;i<n;i++){
            int x = (nums[i] == 0) ? -1 : 1;
            pre+= x;
            if (m.count(pre))
                ans = max(ans,i - m[pre]);
            else
                m[pre]=i;          
        }
        return ans;
    }
};