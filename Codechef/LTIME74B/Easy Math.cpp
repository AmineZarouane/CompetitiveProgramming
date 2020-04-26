#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int N=1e6+5,MOD=1000000007;

int n,a[N],b[N],x,cnt[N],l,r,tc,ans;


char s[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("test.txt","r",stdin);
    #endif
    scanf("%d",&tc);
    while(tc--){
        ans=0;
        scanf("%d",&n); 
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int x = a[j]*a[i];
                int now = 0;
                while(x)
                    now+=x%10,x/=10;
                ans=max(ans,now);
            }
        }
        printf("%d\n",ans );
    }
}