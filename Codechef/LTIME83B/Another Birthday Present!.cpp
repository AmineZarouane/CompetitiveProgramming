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

int n,a[N],b[N],m,k,q,u,v,x,y,tc,l,r,c,ans,cnt[N];

char s[N],grid[N];

void IO(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("test.txt","r",stdin);
	#endif
}

int main(){
	IO();
	scanf("%d",&tc);
	while(tc--){
		scanf("%d%d",&n,&k);
		vector<vector<int> > sorted(k);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			sorted[i%k].push_back(a[i]);
		}
		for(int i=0;i<k;i++)
			sort(sorted[i].begin(),sorted[i].end());
		int last=sorted[0][0];
		bool ok=true;
		for(int i=0;i<n;i++){
			if (sorted[i%k][i/k]<last){
				ok=false;
				break;
			}
			last=sorted[i%k][i/k];
		}
		if (ok)
			printf("yes\n");
		else
			printf("no\n");
	}
}
