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

vector<int> type[M];

int main(){
	//IO();
	scanf("%d",&tc);
	while(tc--){
		ans = 0;
		int mx = 0;
		scanf("%d",&n);
		for(int i = 0 ; i < M ; i++)
			type[i].clear();
		for(int i = 0 ; i < n ; i++){
			scanf("%d",&x);
			type[x].push_back(i);
		}
		for(int i = 1 ; i < M ; i++){
			int last = -2;
			int cur  =  0;
			for(auto x:type[i]){
				if (x!=last+1)
					last=x,cur++;
			}
			if (cur>mx)
				ans=i,mx=cur;

		}
		printf("%d\n",ans);
	}
}