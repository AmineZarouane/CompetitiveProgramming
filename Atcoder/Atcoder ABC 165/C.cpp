//#pragma GCC optimize ("O3")
//#pragma GCC target ("sse4")
#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define all(x) (x).begin(),(x).end()
#define sz(x) (int)(x).size()
#define f first
#define s second
typedef long long ll;
typedef unsigned long long ull;

void IO(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("test.txt","r",stdin);
    #endif
}

const int N=1e6+3,M=1e3+5,mod=1e9+7,dx[]={1,-1,0,0},
                                    dy[]={0,0,1,-1};
const double eps=1e-9;


int tc,n,a[N],b[N],c[N],d[N],m,q;

char s[N];

vector<int> v;

int get(){
    int ans = 0;
    for(int i = 0 ; i < q ; i++)
        if (v[b[i] - 1] - v[a[i] - 1] == c[i])
            ans += d[i];
    return ans;
}

int solve(int last = 1){
    if (sz(v) >= n)
        return get();
    int ans = 0;
    for(int i = last ; i <= m ; i++){
        v.push_back(i);
        ans = max(ans,solve(i));
        v.pop_back();
    }
    return ans;
}

int main(){
    //IO();   
    scanf("%d %d %d",&n,&m,&q);
    for(int i = 0 ; i < q ; i++)
        scanf("%d%d%d%d",&a[i],&b[i],&c[i],&d[i]);
    printf("%d",solve());
}
