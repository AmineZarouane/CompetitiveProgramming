#include <bits/stdc++.h>
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
 
using namespace  __gnu_pbds;
 
using namespace std;
 
typedef tree< int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
 
 
const int N=1e6+5,MOD=1e9+7,M=1e4;
 
const int dx[]={0,1,-1,0},
          dy[]={1,0,0,-1};
 
typedef long long ll;
 
int n,k,m,a[N],b[N],q,u,x,y,tc,c,v,l,r,cnt,ans;
 
char s[N];
 
int dp[N];
 
vector<int> nxt[256];
 
const char str[]="ACGT";
 
string ss;
 
int solve(int idx){
    int &r = dp[idx];
    if (~r)
        return r;
    r = 1e9;
    for(int i = 0 ; i < 4; i++){
        x = str[i];
        auto p = upper_bound(nxt[x].begin(),nxt[x].end(),idx);
        if (p != nxt[x].end())
            r = min(r, 1 + solve(*p));
        else
            r = 0;
    }
    return r;
}
 
int trace(int idx){
    int r = 1e9;
    int go = -1;
    for(int i = 0 ; i < 4 ; i++){
        x = str[i];
        auto p = upper_bound(nxt[x].begin(), nxt[x].end(), idx);
        if (p != nxt[x].end()){
            int x = solve(*p);
            if (x < r){
                go = *p;
                r = x;
                c = i;
            }
        }
        else{
            go = -1;
            c = i;
            break;
        }
    }
    ss += str[c];
    if (go != -1)
        trace(go);
}
 
int main(){
    //freopen("test.txt","r",stdin);
    memset(dp,-1,sizeof dp);
    scanf("%s",s+1);
    for(int i = 1 ; s[i] ; i++)
        nxt[s[i]].push_back(i);
    solve(0);
    trace(0);
    printf("%s\n",ss.c_str());
}