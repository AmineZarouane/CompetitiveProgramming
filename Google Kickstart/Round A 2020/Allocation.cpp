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

int n,m,a[N],b[N],k,q,u,v,x,y,tc,l,r,c,ans,cnt[N];

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
		scanf("%d%d",&n,&m);
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		sort(a,a+n);
		int ans=n;
		for(int i=0;i<n;i++){
			if (m-a[i]<0){
				ans=i;
				break;
			}
			m-=a[i];
		}
		printf("%d\n",ans);
	}
}