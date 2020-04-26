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
    scanf("%s",s);
    if (s[0]=='S'){
        printf("Cloudy\n");
    }    
    else if (s[0]=='C')
        printf("Rainy\n");
    else{
        printf("Sunny\n");
    }
}
