#include <bits/stdc++.h>

using namespace std;

const int N=1e6+3;

const double eps=1e-9;

#define pb push_back
#define all(x) (x).begin(),(x).end()
#define sz(x) (int)(x).size()
#define f first
#define s second
typedef long long ll;

const int dx[]={1,-1,0,0},
		  dy[]={0,0,1,-1};

const int mod=998244353;

int n,a[N],b[N],m,k,q,u,v,x,y,tc,l,r,c,ans;

char s[N],grid[N];

void IO(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("test.txt","r",stdin);
	#endif
}

ll power(int x,int p){
	if (p==0)
		return 1;
	if (p==1)
		return x;
	ll y = power(x,p>>1);
	y = y*y % mod;
	return y * power(x,p&1) % mod; 
}

ll inv(int p){
	return power(power(2,p),mod-2);
}

map<int,int> cnt;


int main(){
	IO();
	scanf("%d",&tc);
	while(tc--){
		cnt.clear();
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			cnt[a[i]]++;
		}
		ll ans = 0;
		int rest = 0;
		ll left = 1;
		for(int i = 1 ; ; i++){
			if (!cnt.count(i)){
				ll right = power(2, n-rest) % mod ;
				ll x = (left * right % mod)  * i % mod;
				ans = (ans + x) % mod;
				break;
			}
			ll right = power(2,n-rest-cnt[i]) % mod;
			ll x = (left * right % mod) * i % mod;
			ans = (ans + x) % mod;
			left = left * (power(2,cnt[i]) - 1) % mod; 
			rest+=cnt[i];
		}
		printf("%lld\n",ans);
	}
}
