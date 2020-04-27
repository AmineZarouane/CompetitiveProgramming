class Solution {
public:
    bool isHappy(int n) {
        bool vis[10000]={0};
        while(n!=1){a
            int _n=0;
            while(n){
                int p=n%10;
                _n+=p*p;
                n/=10;
            }
            n=_n;
            if (vis[n])
                break;
            vis[n]=true;
        }
        return n==1;
    }
};