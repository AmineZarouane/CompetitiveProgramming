#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N=1e6+5,M=1e3+7,mod=1e9+7;

int dx[]={0,1,-1,0},
    dy[]={1,0,0,-1};
              
char s[N];

int a[N],n,m,k,tc,ans,d;

map<pair<int,int>,int > e;
vector<pair<int,int> > edge;

vector<int> g[N];

void dfs(int u,int p){
    vector<int> colored;
    for(auto v:g[u]){
        int mn=min(u,v);
        int mx=max(u,v);
        int c=e[{mn,mx}];
        if (c!=0)
            colored.push_back(c);
    }
    sort(colored.begin(),colored.end());
    colored.push_back(0);
    int curr=1,l=0;
    for(auto v:g[u]){
        int mn=min(u,v);
        int mx=max(u,v);
        int c=e[{mn,mx}];
        if (c==0){
            while (curr == colored[l]){
                l++;
                curr++;
            }
            e[{mn,mx}]=curr++;
        }
    }
    ans=max(ans,curr-1);
    for(auto v:g[u])
        if (v!=p)
            dfs(v,u);

}

int main() {
    
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        int u,v;
        scanf("%d%d",&u,&v);
        g[u].push_back(v);
        g[v].push_back(u);
        e[{min(u,v),max(u,v)}]=0;
        edge.push_back({u,v});
    }
    dfs(1,1);
    printf("%d\n",ans);
    for(auto p:edge){
        int mn=min(p.first,p.second);
        int mx=max(p.first,p.second);
        printf("%d\n",e[{mn,mx}]);
    }
}
