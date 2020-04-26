#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int N=1e6+5;

int m,n,k,ans,l,r,u,v,x,tc,y,q,sz,d,a[N];


char s[N];

int main(){ 
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
   
    double sum=0;
    scanf("%d",&n);
    priority_queue <double,vector<double>,greater<double> > pq;
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]),pq.push((double)a[i]);
    while((int)pq.size()>1){
        double x=pq.top();
        pq.pop();
        x=(x+pq.top())/2;
        pq.pop();
        pq.push(x);
    }
    printf("%.6lf\n",pq.top());

}


