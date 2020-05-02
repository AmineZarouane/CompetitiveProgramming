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


int tc,n,d;

char s[N];

ll a[N];

int main(){
    //IO();   
    scanf("%d",&tc);
    for(int t = 1 ; t <= tc ; t++){
        printf("Case #%d: ",t);
        scanf("%d%d",&n,&d);
        int ans = d - 1;
        map<ll,int> cnt;
        int mx = 0;
        for(int i = 0 ; i < n ; i++){
            scanf("%lld",&a[i]);
            cnt[a[i]]++;
            if (cnt[a[i]] == d)
                ans = 0;
        }
        for(int i = 0 ; i < n ; i++){
            for (int j = i + 1 ; j < n ; j++){
                ll mn = min(a[i],a[j]);
                ll mx = max(a[i],a[j]);
                cnt[mx]--;
                cnt[mx-mn]++;
                cnt[mn]++;
                if (cnt[mx-mn] >= d || cnt[mn] >= d)
                    ans = min(1,ans);
                cnt[mx]++;
                cnt[mx-mn]--;
                cnt[mn]--;

            }
        }
        printf("%d\n",ans);
        
    }
}
