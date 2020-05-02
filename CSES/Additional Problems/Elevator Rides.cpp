//#pragma GCC optimize ("O3")
//#pragma GCC target ("sse4")
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
 
int n,a[N],b[N],m,k,q,u,x,y,tc,l,r,c,ans;
 
char s[N],grid[N];
 
void IO(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("test.txt","r",stdin);
    #endif
}
 
pair<int,int> dp[1 << 20];
 
int main(){
//  IO();
    scanf("%d%d",&n,&x);
    for(int i = 0 ; i < n ; i++)
        scanf("%d",&a[i]);
    dp[0] = {1,0};
    for(int mask = 1 ; mask < (1 << n) ; mask++){
        dp[mask] = {n,1e9};
        for(int i = 0 ; i < n ; i++){
            if (mask & (1 << i)){
                int subset_without_item_i = mask ^ (1 << i);
                pair<int,int> cur = dp[subset_without_item_i];
                if (cur.s + a[i] > x)
                    cur = {cur.f + 1, 0};
                cur.s += a[i];
                dp[mask] = min(dp[mask], cur);
            }
        }
    }
    printf("%d\n",dp[(1 << n) - 1].f);
 
}