#include <bits/stdc++.h>

using namespace std;

const int N=1e6+5;

const int dx[]={0,1,-1,0},
		  dy[]={1,0,0,-1};

typedef long long ll;

int n,m,tc,k,ans,a[N],q,x;

bool vis[N];

char s[N];

vector<int> v;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("test.txt","r",stdin);
    #endif
    scanf("%d",&tc);
    while(tc--){
    	memset(vis,0,sizeof vis);
    	v.clear();
    	int o=0,e=0;
    	scanf("%d",&q);
    	while(q--){
    		scanf("%d",&x);
    		if (!vis[x]){
    			if (__builtin_popcount(x)&1)
    				o++;
    			else
    				e++;
    			n=v.size();
    			for(int i=0;i<n;i++){
    				if (!vis[x^v[i]]){
    					v.push_back(x^v[i]);
    					if (__builtin_popcount(x^v[i])&1)
    						o++;
    					else
    						e++;
    				}
    				vis[x^v[i]]=true;
    			}
    			v.push_back(x);
    		}
    		vis[x]=1;
    		printf("%d %d\n",e,o);
    	}

    }
}