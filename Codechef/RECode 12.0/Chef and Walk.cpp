#include <bits/stdc++.h>

using namespace std;

const int N=1e6+3,M=1e3+5;

const double eps=1e-9;

#define pb push_back
#define all(x) (x).begin(),(x).end()
#define sz(x) (int)(x).size()
#define f first
#define s second
typedef long long ll;
typedef unsigned long long ull;

const int dx[]={1,-1,0,0},
		  dy[]={0,0,1,-1};

const int mod=1e9+7;

int n,a[N],b[N],m,k,q,u,v,x,y,tc,l,r,c,ans;

char s[N],grid[N];

void IO(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("test.txt","r",stdin);
	#endif
}

int power(int a,int p){
	if (!p)
		return 1;
	if (p == 1)
		return a;
	int b = power(a,p>>1);
	b = (ll)b * b % mod;
	return (ll)b * power(a,p&1) % mod;
}

ll U(ll n){
	return 2 * n % mod;
}

ll S(int p,int n){
	return ((n-p+1) * (U(n) + U(p) % mod) % mod ) * power(2,mod-2) % mod;
}

int main(){
	//IO();
	scanf("%d",&tc);
	while(tc--){
		scanf("%d%d",&n,&k);
		if (n == 0){
			printf("%lld\n",S(0,k-1));
			continue;
		}
		ll start = S(0,n + k / 2);
		ll suffix ;
		if ( k % 2 == 0 )
			suffix = ((U(n + k/2) - n) + mod) % mod;
		else
			suffix = (n) % mod;
		start = (start - suffix + mod) % mod;
		printf("%lld\n",start);
	}
}
