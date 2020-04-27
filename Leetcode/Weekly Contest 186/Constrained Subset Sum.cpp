    const int N = 1e5+3;
    class Solution {
    public:
        int tree[4*N];

        int get(int idx, int l, int r, int ql, int qr){
            if (r < ql || l > qr)
                return 0;
            if (l >= ql && r <= qr)
                return tree[idx];
            int mid = (l + r) >> 1 ;
            return max(get(idx<<1,l,mid,ql,qr),get((idx<<1) + 1,mid+1,r,ql,qr));
        }

        void update(int idx, int l, int r, int p, int x){
            if (r < p || l > p)
                return ;
            if (l == p && r == p){
                tree[idx] = x;
                return ;
            }
            int mid = (l + r) >> 1;
            update(idx<<1,l,mid,p,x);
            update((idx<<1)+1,mid+1,r,p,x);
            tree[idx] = max(tree[idx<<1],tree[(idx<<1) + 1]); 
        }

        int constrainedSubsetSum(vector<int>& nums, int k) {
            int n = (int)nums.size();
            int ans = nums[0];
            for(int i = 0 ; i < n ; i++){
                int x = max(0,get(1,0,n-1,max(0,i-k),i-1));
                int curr = nums[i]  + x;
                ans = max(curr,ans);
                update(1,0,n-1,i,curr);
            }
            return ans;
        }
    };