class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=(int)nums.size();
        int l=0,cnt=0;
        for(int i=0;i<n;i++)
            if (!nums[i])
                cnt++;
            else
                nums[l++]=nums[i];
        for(int i=n-cnt;i<n;i++)
            nums[i]=0;
    }
};