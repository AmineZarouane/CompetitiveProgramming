#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
 
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/rope>
 
using namespace std;
using namespace __gnu_pbds;
using namespace __gnu_cxx;
 
const int N=1e6+5,MOD=1e9+7,INF=1e9;
 
const int dx[]={0,1,-1,0},
          dy[]={1,0,0,-1};
 
typedef long long ll;
 
int n,m,k,a[N],b[N],q,u,v,x,y,tc,ans,c,l,r,deg[N];
 
char s[N];
 
gp_hash_table<int,bool> vis;
 
int power(int x,int p){
    if (p==0)
        return 1;
    if (p==1)
        return x;
    int y = power(x,p>>1);
    return y * y * power(x,p&1);
}
 
bool valid(int x,int y){
    return x>=0 && y>=0 && x<3 && y<3;
}
 
const int target = 123456789;

int main(){
    //freopen("test.txt","r",stdin);
    n = 3;
    int s = 0;
    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ;j < n ; j++)
            scanf("%d",&c),s = s * 10 + c;
    queue<pair<int,int>> q;
    vis[s] = 1;
    q.push({s,0});
    while(!q.empty()){
        s = q.front().first;
        int cst = q.front().second;
        q.pop();
        if (s == target)
            return !printf("%d",cst);
        for(int yy = 0; yy < 9; yy++){
            for(int k = 0 ; k < 4 ; k++){
                int i = yy / 3;
                int j = yy % 3;
                x= i + dx[k];
                y= j + dy[k];
                if (valid(x,y)){
                    int xx = x * 3 + y;
                    int p = s;
                    int pa = power(10,8-xx);
                    int pb = power(10,8-yy);
                    int a = (s / pa) % 10;
                    int b = (s / pb) % 10;
                    p += a * pb + b * pa - a * pa - b * pb;
                    if (!vis[p] && cst<16){
                        vis[p] = 1;
                        q.push({p,cst+1});
                    }
                }
            }
        }
    }
}