#include <bits/stdc++.h>

using namespace std;

#define ll long long;

const int N=1e6+5;

vector<int> v;

int n,ans,tc,q,m,a[N],k;

char s1[N],s2[N];

int main(){
    scanf("%s%s",s1,s2);
    for(int i=0;s1[i];i++)
        ans+=s1[i]==s2[i];
    printf("%d\n",ans);
}
