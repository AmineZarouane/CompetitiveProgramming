#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N=1e6+5,M=1e3+7,mod=1e9+7;

int dx[]={0,1,-1,0},
    dy[]={1,0,0,-1};
              
char s[N];

int a[N],n,m,k,tc,ans,d;

int main() {
    
    scanf("%d",&n);
    scanf("%s",s);
    for(int i=0;s[i];i++){
        char c=s[i]+n;
        if (c>'Z')
            c-=26;
        printf("%c",c);
    }

}
