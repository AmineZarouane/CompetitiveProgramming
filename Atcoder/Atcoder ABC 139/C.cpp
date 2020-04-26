#include <bits/stdc++.h>

using namespace std;

#define ll long long;

const int N=1e6+5;

vector<int> v;

int n,ans,tc,q,m,a[N],k;

char s1[N],s2[N];

int main(){
    scanf("%d",&n);
    ans=1;
    int curr=1;
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for (int i=1; i<n; i++){
        if (a[i] <= a[i-1]) 
            curr++; 
        else
        { 

            ans=max(ans,curr);

            curr = 1;
        }
    } 
    ans=max(ans,curr);
    printf("%d\n",ans-1);
}
