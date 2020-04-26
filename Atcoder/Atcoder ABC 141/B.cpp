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
   
    bool ok=true;
    scanf("%s",s);
    for(int i=0;s[i];i++){
        if (i%2==0 && s[i]=='L'){
            ok=false;
        }
        else if (i%2==1 && s[i]=='R'){
            ok=false;
        }
    }
    if (ok)
        printf("Yes\n");
    else
        printf("No\n");
}
