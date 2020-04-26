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
		scanf("%s",s);
		stack<char> st;
		int l=0;
		for(int i=0;s[i];i++){
			x=s[i]-'0';
			while(l<x){
				l++;
				printf("(");
			}
			while (l>x){
				l--;
				printf(")");
			}
			printf("%d",x);
		}
		while(l--)
			printf(")");
		printf("\n");
	}
}
