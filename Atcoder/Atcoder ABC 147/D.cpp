#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define sz(x) int((x).size())

const int N=1e6+5,M=1e3+7,mod=1e9+7;

int dx[]={0,1,-1,0},
    dy[]={1,0,0,-1};
              

int b[N],n,m,k,tc,ans,d,x,y;

ll a[N];

char s[N];

vector<pair<int,int> > g[N];

ll solve() 
{ 
    ll ret=0; 
    for (int i = 0; i < 60; i++)  
    { 
        int z = 0, o = 0;  
        ll curr = 0;  
        for (int j = 0; j < n; j++) { 
            if (a[j] % 2 == 0) 
                z++; 
            else
                o++; 
            a[j] /= 2; 
        }        
        curr = ( ((ll)o * z %mod) * ((1LL << i)%mod))%mod;  
        ret = (ret+curr)%mod;  
    } 
    return ret; 
} 

int main() {
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    	scanf("%lld",&a[i]);
    printf("%lld\n",solve());
}

