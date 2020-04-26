#include <bits/stdc++.h>

using namespace std;

const int N=805;

const int dx[]={0,1,-1,0},
		  dy[]={1,0,0,-1};

typedef long long ll;

int n,m,tc,k,ans,q,x,a[N];

ll dp[N][N],pre[N];

char s[N];

ll solve(int l,int r){
	if (l>=r)
		return 0;
	ll &ret=dp[l][r];
	if (~ret)
		return ret;
	ret=1e18;
	for(int i=l;i<r;i++)
		ret=min(ret,solve(l,i)+solve(i+1,r)+(pre[r]-pre[i])+(pre[i]-pre[l-1]));
	return ret;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("test.txt","r",stdin);
    #endif
    scanf("%d",&tc);
    while(tc--){
    	ll ans=1e18;
    	memset(dp,-1,sizeof dp);
    	pre[0]=0;
    	scanf("%d",&n);
    	for(int i=n+1;i<=2*n;i++)
    		scanf("%d",&a[i]),a[i-n]=a[i];
    	for(int i=1;i<=2*n;i++)
    		pre[i]=pre[i-1]+a[i];
    	for(int i=1;i<=n;i++)
    		ans=min(ans,solve(i,i+n-1));
    	printf("%lld\n",ans);
    }
}