#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

#define il inline


template <typename T> il void read(T &x) {
	char ch = getchar(); int f = 1; x = 0;
	while(ch < '0' || ch > '9') {if(ch == '-') f = -1; ch = getchar();}
	while(ch >= '0' && ch <= '9') x = x*10+ch-'0', ch = getchar();
	x *= f;
}
template <typename T, typename... Args> il void read(T &x, Args &...args) {
	read(x), read(args...);
}

using namespace std;

const int N=1e3+5;

bool taken[N];

const int dx[]={0,1,-1,0},
          dy[]={1,0,0,-1};

int n,z,tc,a[N],ahsen[N];

typedef long long ll;

ll ans[N][N];



int main()
{   
    read(tc);
    while(tc--){
        read(n,z);
        for(int i=1;i<=n;i++)
            read(a[i]);
        sort(a+1,a+n+1,greater<int>());
        for(int i=0;i<=n;i++)
            for(int j=0;j<=z;j++)
              ans[i][j]=1e18;
        ll r = 1e18;
        for(int i=1;i<=n;i++){
            ans[i][1]=(ll)i*a[i];
            for(int j=2;j<=min(z,i);j++){
                int limit = ahsen[j-1];
                for(int k=j-1;k<=i-1;k++){
                    if(ans[k][j-1]+(ll)a[i]*(i-k)<ans[i][j]){
                        ans[i][j]=ans[k][j-1]+(ll)a[i]*(i-k); 
                    }
     
                }
            }
            r = min(r,ans[i][z]);
        }
        printf("%lld\n",r );
    }
}