#include <bits/stdc++.h>
 
using namespace std; 
 
const int N=1e6+5,MOD=1e9+7,M=1e4;
 
const int dx[]={0,1,-1,0},
          dy[]={1,0,0,-1};
 
typedef long long ll;
 
int n,m,k,b[N],q,u,v,x,y,tc,ans,c,l,r,deg[N];
 
char s[N];
 
ll a[N];
 
vector<int> g[N];
 
vector<pair<int,int>> e;
 
int main(){
    scanf("%d",&n);
    for(int i = 0 ; i < n - 2 ; i++)
        scanf("%d",&a[i]),deg[--a[i]]++;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i = 0 ; i < n ; i++)
        if (!deg[i])
            pq.push(i);
    for(int i = 0 ; i< n - 2 ; i++){
        x=pq.top();
        pq.pop();
        deg[a[i]]--;
        e.push_back({x,a[i]});
        if (!deg[a[i]])
            pq.push(a[i]);
    }
    x = pq.top();
    pq.pop();
    e.push_back({x, pq.top()});
    for(auto x : e)
        printf("%d %d\n",x.first+1, x.second+1);
}