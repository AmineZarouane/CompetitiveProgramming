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


set<int> nxt[26];

int main(){
//	#ifndef ONLINE_JUDGE
//		freopen("test.txt","r",stdin);
//	#endif
	scanf("%d",&n);
	scanf("%s",s);
	for(int i=0;i<n;i++){
		nxt[s[i]-'a'].insert(i+1);
	}
	scanf("%d",&q);
	while(q--){
		int t;
		scanf("%d",&t);
		if (t==1){
			scanf("%d %c",&p,&c);
			nxt[s[p-1]-'a'].erase(p);
			s[p-1]=c;
			nxt[c-'a'].insert(p);
		}
		else{
			scanf("%d%d",&l,&r);
			int ans=0;
			for(int i=0;i<26;i++){
				auto ll=nxt[i].lower_bound(l);
				if (ll!=nxt[i].end() && *ll<=r)
                    ans++;
			}
			printf("%d\n",ans);
		}
	}
}

