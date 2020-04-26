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
 
int n,b[N],m,k,q,u,v,x,y,tc,l,r,c,ans,cnt[N];
 
char s[N],grid[N];
 
pair<pair<int,int>,int> a[N];

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
		for(int i=0;i<n;i++)
			scanf("%d%d",&a[i].f.f,&a[i].f.s),a[i].s=i;
		sort(a,a+n);
		int C=0,J=0;
		bool ok=true;
		vector<char> ans(n);
		for(int i=0;i<n;i++){
			int p=a[i].s;
			if (a[i].f.f>=C){
				ans[p]='C';
				C=a[i].f.s;
			}
			else if (a[i].f.f>=J){
				ans[p]='J';
				J=a[i].f.s;
			}
			else{
				ok=false;
				break;
			}
		}
		if (!ok)
			printf("IMPOSSIBLE");
		else
			for(auto c:ans)
				printf("%c",c);
		printf("\n");
	}
}
