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

int tc,n,a[N],d,x,k,ans;

char s[N];

bool ok[N];

int main(){
    //IO();
    scanf("%d%d",&n,&k);
    for(int i = 0 ; i < k ; i++){
        scanf("%d",&d);
        while(d--){
            scanf("%d",&x);
            ok[x] = true;
        }
    }
    for(int i = 1 ; i <= n ; i++)
        ans += !ok[i];
    printf("%d\n",ans);
}
