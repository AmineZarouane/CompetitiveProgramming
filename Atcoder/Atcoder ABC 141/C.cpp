#include <bits/stdc++.h>
 
using namespace std;
 
 
const int N=1e6+5,MOD=1e9;
 
const int dx[]={0,1,-1,0},
          dy[]={1,0,0,-1};
 
typedef long long ll;
 
int n,m,k,a[N],b[N],q,u,x,y,tc,c,ans;
 
char s[N],s2[N];
 
vector<int> v;

int main() {
    
    scanf("%d%d%d",&n,&k,&q);
    for(int i=0;i<q;i++){
        scanf("%d",&x);
        x--;
        a[x]++;
    }
    for(int i=0;i<n;i++){
        if (a[i]+k>q)
            printf("Yes\n");
        else
            printf("No\n");
    }
}
