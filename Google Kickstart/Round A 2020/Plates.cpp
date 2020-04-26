#include <bits/stdc++.h>

using namespace std;

const int N=1e6+3;

const double eps=0.000000001;

#define pb push_back
#define all(x) (x).begin(),(x).end()
#define sz(x) (int)(x).size()
typedef long long ll;

const int dx[]={1,-1,0,0},
		  dy[]={0,0,1,-1};

const int inf=1e9,mod=1e9+7;

int n,m,a[105][105],b[N],k,q,u,v,x,y,tc,l,r,c,p,ans,cnt[N];

char s[N];

int dp[105][2000];

void IO(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("test.txt","r",stdin);
	#endif
}

int solve(int idx,int curr){
	if (idx>=n){
		if (curr==p)
			return 0;
		else
			return -1e9;
	}
	int &r=dp[idx][curr];
	if (r!=-1)
		return r;
	int sum=0;
	r=solve(idx+1,curr);
	for(int i=0;i<k;i++){
		sum+=a[idx][i];
		r=max(r,sum+solve(idx+1,curr+i+1));
	}
	return r;
}

int main(){
	//IO();
	scanf("%d",&tc);
	for(int t=1;t<=tc;t++){
		memset(dp,-1,sizeof dp);
		printf("Case #%d: ",t);
		scanf("%d%d%d",&n,&k,&p);
		for(int i=0;i<n;i++)
			for(int j=0;j<k;j++)
				scanf("%d",&a[i][j]);
		printf("%d\n",solve(0,0));
	}
}