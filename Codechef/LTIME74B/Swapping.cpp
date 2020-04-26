#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int N=1e6+5,MOD=1000000007;

int n,a[N],b[N],x,cnt[N],l,r,tc;

ll ans,dp[N];;

char s[N];

ll solve(int idx){
    if(idx<=0)
        return 0;
    ll &r = dp[idx];
    if (r!=-1)
        return r;
    r = max(solve(idx-2)+(ll)a[idx]*(idx-1)+(ll)a[idx-1]*idx,solve(idx-1)+(ll)a[idx]*idx);

    return r;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("test.txt","r",stdin);
    #endif
    scanf("%d",&tc);
    while(tc--){
        scanf("%d",&n);
        for(int i=0;i<=n;i++)
            dp[i]=-1;
        for(int i=1;i<=n;i++)
            scanf("%d",&a[i]);
        printf("%lld\n",solve(n));
    }
}