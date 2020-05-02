#include <bits/stdc++.h>
 
using namespace std;
 
const int N=1e6+3,M=1e3+5;
 
const double eps=1e-9;
 
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define sz(x) (int)(x).size()
#define f first
#define s second
typedef long long ll;
typedef unsigned long long ull;
 
const int dx[]={1,-1,0,0},
          dy[]={0,0,1,-1};
 
const int mod=1e9+7;
 
int n,a[N],b[N],m,k,q,u,v,x,y,tc,l,r,c;
 
char s[N],grid[N];
 
ll ans;
 
void IO(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("test.txt","r",stdin);
    #endif
}
 
unordered_map<int,int> cnt;
 
void solve(int idx,int sum,int query = 0){
    if (idx == m){
        if (!query)
            cnt[sum] ++;
        else
            ans += cnt[x - sum];
        return ;
    }
    solve(idx + 1, sum, query);
    if (sum + a[idx] <= x)
        solve(idx + 1, sum + a[idx], query);
}
 
int main(){
    //IO();
    scanf("%d%d",&n,&x);
    for(int i = 0 ; i < n ; i++)
        scanf("%d",&a[i]);
    m = n / 2;
    solve(0,0);
    m = n;
    solve(n/2,0,1);
    printf("%lld\n",ans);
}