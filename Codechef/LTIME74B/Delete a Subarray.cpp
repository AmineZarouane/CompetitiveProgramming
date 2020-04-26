#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int N=1e6+5,MOD=1000000007;

int n,a[N],b[N],x,cnt[N],l,r,tc;

ll ans;

char s[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("test.txt","r",stdin);
    #endif
    a[0]=-1e9-1;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
            scanf("%d",&a[i]);
        int l=1,r=n;
        for(int i=2;i<=n;i++){
            if (a[i]>a[i-1])
                l=i;
            else
                break;
        }
        for(int i=n-1;i>=1;i--){
            if (a[i]>=a[i+1]){
                break;
            }
            r=i;
        }
        ll ways=0;
        for(int i=0;i<=l;i++){
            while(r<=n){
                if (a[i]<a[r])
                    break;
                r++;
            }
            ways+=(n-r);
            if (i)
                ways++;
            if (r!=i+1)
                ways++;
        }
        printf("%lld\n",ways);
    }
}
