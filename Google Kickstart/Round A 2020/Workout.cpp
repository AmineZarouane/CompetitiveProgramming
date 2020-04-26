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

int n,m,a[N],b[N],k,q,u,v,x,y,tc,l,r,c,p,ans,cnt[N];

char s[N];

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
		scanf("%d%d",&n,&k);
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		priority_queue<int> pq;
		for(int i=1;i<n;i++)
			pq.push(a[i]-a[i-1]);
		while(k--){
			x=pq.top();
			pq.pop();
			pq.push(x/2);
			pq.push((x+1)/2);
		}
		printf("%d\n",pq.top());
	}
}