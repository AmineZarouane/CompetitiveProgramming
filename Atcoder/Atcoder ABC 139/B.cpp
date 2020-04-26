#include <bits/stdc++.h>

using namespace std;

#define ll long long;

const int N=1e6+5;

vector<int> v;

int n,ans,tc,q,m,a[N],k;

char s1[N],s2[N];

int main(){
    scanf("%d%d",&n,&k);
    int curr=1;
    for(int i=0; ;i++){
        if (curr>=k)
            return !printf("%d\n",i);
        curr+=n-1;
    }
}
