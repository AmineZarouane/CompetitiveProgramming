class Solution {
public:
    int bs(int l,int r,vector<int>& nums,int x){
        if (l > r)
            return -1;
        int mid = (l + r) >> 1;
        if (nums[mid] < nums[l]){
            if (nums[mid] > x || nums[l] <= x)
                return bs(l,mid-1,nums,x);
            else if (nums[mid] < x)
                return bs(mid+1, r,nums,x);
            else
                return mid;
        }
        else{
            if (nums[l] > x || nums[mid] < x)
                return bs(mid+1,r,nums,x);
            else if (nums[mid] > x)
                return bs(l,mid-1,nums,x);
            else
                return mid;
        }
    }
    int search(vector<int>& nums, int target) {
        int n = (int)nums.size();
        int l = 0,r = n-1;
        return bs(l,r,nums,target);
    }
};