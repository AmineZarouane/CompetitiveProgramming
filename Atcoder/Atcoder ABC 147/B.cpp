#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define sz(x) int((x).size())

const int N=1e6+5,M=1e3+7,mod=1e9+7;

int dx[]={0,1,-1,0},
    dy[]={1,0,0,-1};
              

int a[N],b[N],n,m,k,tc,ans,d,x,y;

char s[N];

int main() {
    scanf("%s",s);
    n=strlen(s);
    for(int i=0;i<n/2;i++){
        if (s[i]!=s[n-i-1])
            ans++;
    }
    printf("%d\n",ans);
}

