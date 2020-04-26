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
    ll ans=0;
    priority_queue<int> pq;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]),pq.push(a[i]);
    while(!pq.empty() && m>0){
        int x=pq.top();
        pq.pop();
        x/=2;
        m--;
        if (x!=0)
            pq.push(x);
    }
    while(!pq.empty()){
        ans+=pq.top();
        pq.pop();
    }
    printf("%lld\n",ans);
}
