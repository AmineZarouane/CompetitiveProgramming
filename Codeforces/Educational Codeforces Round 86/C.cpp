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
typedef unsigned long long ull;
 
const int dx[]={1,-1,0,0},
		  dy[]={0,0,1,-1};
 
const int mod=1e9+7;
 
void IO(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("test.txt","r",stdin);
	#endif
}
 
 
int pre[40005];
 
int main(){
	IO();
	int tc;
	scanf("%d",&tc);
	while(tc--){
		int a,b,q;
		memset(pre,0,sizeof pre);
		scanf("%d%d%d",&a,&b,&q);
		int mx = a * b;
		for(int i = 1 ; i <= mx ; i++){
			pre[i] = pre[i-1];
			if ( (i % a % b) != (i % b % a))
				pre[i]++;
		}
		while(q--){
			ll l,r;
			scanf("%lld%lld",&l,&r);
			l--;
			ll d   = r / mx;
			ll ans = pre[mx] * d  + pre[r%mx];
			ll d2  = l / mx;
			ans   -= pre[mx] * d2 + pre[l%mx];
			printf("%lld ",ans);
		}
		printf("\n");
	}
}
