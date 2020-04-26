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

void IO(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("test.txt","r",stdin);
	#endif
}

bool eliminated[105][105];

bool valid(int x,int y){
	return x>=0 && x<n && y>=0 && y<m;
}

double get_avg(int x,int y){
	double avg = 0;
	int cnt = 0;
	for(int d=0;d<4;d++){
		int xx = x + dx[d];
		int yy = y + dy[d];
		while (valid(xx,yy) && eliminated[xx][yy])
			xx+=dx[d],yy+=dy[d];
		if (valid(xx,yy))
			avg+=a[xx][yy],cnt++;
	}
	return avg / cnt;
}

ll solve(){
	ll sum=0;
	while(1){
		ll cur=0;
		vector<pair<int,int> > nxt; 
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++){
				if (eliminated[i][j])
					continue;
				double avg = get_avg(i,j);
				if (avg>a[i][j])
					nxt.push_back({i,j});
				cur+=a[i][j];
			}
		sum+=cur;
		for(auto p:nxt)
			eliminated[p.f][p.s]=true;
		if (nxt.empty())
			break;
	}
	return sum;
}


int main(){
	//IO();
	scanf("%d",&tc);
	for(int t=1;t<=tc;t++){
		memset(eliminated,false,sizeof eliminated);
		printf("Case #%d: ",t);
		scanf("%d%d",&n,&m);
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				scanf("%d",&a[i][j]);
		printf("%lld\n",solve());
	}

}


