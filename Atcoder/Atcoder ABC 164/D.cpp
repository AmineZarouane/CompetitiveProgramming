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

int cnt[2050];

int main(){
	//IO();
	scanf("%s",s);
	int n = strlen(s);
	reverse(s,s+n);
	cnt[0] = 1;
	ll ans = 0;
	ll pre = 0;
	int pw = 1;
	for(int i = 0 ; s[i] ; i++){
		pre = pre + (s[i]-'0') * pw;
		pre %= 2019;
		pw = pw * 10 % 2019;
		ans += cnt[pre]++;
	}
	printf("%lld\n",ans);
}
