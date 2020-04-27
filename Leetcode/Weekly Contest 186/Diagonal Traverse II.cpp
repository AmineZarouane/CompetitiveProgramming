const int N = 2e5+7;
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        int n = (int)nums.size();
        vector<int> v;
        vector<int> diag[N];
        int mx = 0;
        for(int i = n-1 ; ~i ; i--)
           for(int j = (int)nums[i].size() - 1 ; ~j ; j--)
               diag[i + j].push_back(nums[i][j]),mx=max(mx,i+j+1);
        for(int i = 0 ; i < mx ; i++){
            for(auto &x : diag[i])
                v.push_back(x);
        }
        return v;
    }
};