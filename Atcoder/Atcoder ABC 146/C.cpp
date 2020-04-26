#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N=1e6+5,M=1e3+7,mod=1e9+7;

int dx[]={0,1,-1,0},
    dy[]={1,0,0,-1};
              
char s[N];

int a[N],n,m,k,tc,ans,d;

int main() {
    
    ll ans=0;
    ll a,b,x;
    scanf("%lld%lld%lld",&a,&b,&x);
    int l=0,r=1e9;
    while(l<=r){
        int mid=(l+r)/2;
        if (a*mid + b*((ll)log10(mid)+1) <= x){
            ans=mid;
            l=mid+1;
        }
        else
            r=mid-1;
    }
    printf("%lld\n",ans);

}
