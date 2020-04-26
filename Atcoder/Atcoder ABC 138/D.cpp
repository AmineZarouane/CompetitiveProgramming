#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int N=1e6+5;

int m,n,k,ans,l,r,u,x,tc,y,q,d,a[N];


char s[N];

int len,sz[N],pos[N];

pair <int,ll> v[N];

vector <int> g[N];

int dfs(int u,int p){
    sz[u]=1;
    pos[u]=len;
    v[len++]={u,0};
    for(auto v:g[u])
        if (v!=p)
            sz[u]+=dfs(v,u);
    return sz[u];
}

int main(){ 
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    scanf("%d%d",&n,&q);
    for(int i=0;i<n-1;i++){
        int u,v;
        scanf("%d%d",&u,&v);
        u--,v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(0,0);
    while(q--){
        scanf("%d%d",&u,&x);
        u--;
        v[pos[u]].second+=x;
        v[pos[u]+sz[u]].second-=x;
    }
    for(int i=1;i<n;i++)
        v[i].second+=v[i-1].second;
    for(int i=0;i<n;i++){
        printf("%lld ",v[pos[i]].second);
    }
}


