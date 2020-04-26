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
 
const int mod=1e9+7,MOD=998244353;
 
int n,a[105][105],b[N],m,k,q,u,v,x,y,tc,l,r,c,ans,cnt[N];
 
char s[N],grid[N];
 
bool vis[105];

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
	for(int t=1;t<=tc;t++){
		printf("Case #%d: ",t);
		scanf("%d",&n);
		int ans=0,r=0,c=0;
		for(int i=0;i<n;i++){
			memset(vis,0,sizeof(vis));
			int add=0;
			for(int j=0;j<n;j++){
				scanf("%d",&a[i][j]);
				if (vis[a[i][j]])
					add=1;
				if (i==j)
					ans+=a[i][j];
				vis[a[i][j]]=true;
			}
			r+=add;
		}
		for(int j=0;j<n;j++){
			memset(vis,0,sizeof(vis));
			int add=0;
			for(int i=0;i<n;i++){
				if (vis[a[i][j]])
					add=1;
				vis[a[i][j]]=true;
			}
			c+=add;
		}
		printf("%d %d %d\n",ans,r,c);
	}
}