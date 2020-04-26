#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define sz(x) int((x).size())

const int N=1e6+5,M=1e3+7,mod=1e9+7;

int dx[]={0,1,-1,0},
    dy[]={1,0,0,-1};
              

int a[N],b[N],n,m,k,tc,ans,d,x,y;

char s[N];

vector<pair<int,int> > g[N];

bool check(int mask){
    for(int i=1;i<=n;i++){
        if ( ! (mask & (1<<(i-1))) )
            continue;
        for(auto x:g[i]){
            if (!x.second){
                if (mask & (1 << (x.first-1)))
                    return false;
            }
            else{
                if (! (mask & (1 << (x.first-1))))
                    return false;
            }
        }

    }
    return true;
}

int main() {
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&m);
        while(m--){
            scanf("%d%d",&x,&y);
            g[i].push_back({x,y});
        }
    }
    for(int i=0;i< (1<<n) ;i++){
        if (check(i))
            ans=max(ans,__builtin_popcount(i));
    }
    printf("%d\n",ans);
}

