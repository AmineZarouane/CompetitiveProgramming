#include <bits/stdc++.h>

using namespace std;

const int N=1e6+3;

#define pb push_back
#define all(x) (x).begin(),(x).end()
typedef long long ll;

const int dx[]={1,-1,0,0},
		  dy[]={0,0,1,-1};

const int inf=1e9;

int n,m,a[N],k,q,u,v,x,y,tc,c,l,r,ans,p,cnt,root[N],sz[N];

char s[N];

bool ok[N];

vector<int> f[N],b[N];

int Find(int u){
	if (root[u]==u)
		return u;
	return root[u]=Find(root[u]);
}

int main(){
	
	scanf("%d%d%d",&n,&m,&k);
	for(int i=1;i<=n;i++){
		root[i]=i;
		sz[i]=1;
	}
	while(m--){
		scanf("%d %d",&u,&v);
		f[u].push_back(v);
		f[v].push_back(u);
		int _u=Find(u),_v=Find(v);
		if (_u!=_v){
			root[_u]=_v;
			sz[_v]+=sz[_u];
		}
	}
	while(k--){
		scanf("%d %d",&u,&v);
		b[u].push_back(v);
		b[v].push_back(u);
	}
	for(int i=1;i<=n;i++){
		int u=Find(i);
		int ans=sz[u]-f[i].size()-1;
		for(int j=0;j<b[i].size();j++){
			int v=b[i][j];
			int _v=Find(v);
			if (u==_v)
				ans--;
		}
		printf("%d ",ans);
	}

}

