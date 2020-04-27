class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = (int)nums.size();
        vector<int> output(n+1);
        output[n]=1;
        for(int i = n-1;i>=0;i--)
            output[i] = output[i+1] * nums[i];
        int pre = 1;
        for(int i = 0 ; i < n ; i++){
            output[i] = pre * output[i+1];
            pre *= nums[i];
        }
        output.pop_back();
        return output;
    }
};