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

int main(){
	//IO();
	scanf("%d",&tc);
	while(tc--){
		ans = 1;
		scanf("%d",&n);
		map<int,vector<int> > nxt;
		for(int i = 0 ; i < n ; i++){
			scanf("%d",&a[i]);
			nxt[a[i]].push_back(i);
		}
		sort(a,a+n);
		int last = -1;
		int x  = -1;
		for(int i = 0 ; i < n ; i++){
			if (a[i] == x)
				continue;
			x = a[i];
			vector <int>& v = nxt[x];
			int p = lower_bound(v.begin(),v.end(),last) - v.begin();
			if ( p == (int)v.size() ){
				ans++;
				last = nxt[x][0];
			}
			else
				last = nxt[x][p];
		}
		printf("%d\n",ans);
	}
}