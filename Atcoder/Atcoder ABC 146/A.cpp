#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N=1e6+5,M=1e3+7,mod=1e9+7;

int dx[]={0,1,-1,0},
    dy[]={1,0,0,-1};
              
char s[N];

int a[N],n,m,k,tc,ans,d;

int main() {
    string s;
    cin >> s;
    if (s=="SAT"){
        ans=1;
    }
    else if (s=="MON"){
        ans=6;

    }
    else if (s=="TUE"){
        ans=5;
    }
    else if (s=="WED"){
        ans=4;
    }
    else if (s=="THU"){
        ans=3;
    }
    else if (s=="FRI"){
        ans=2;
    }
    else
        ans=7;
    printf("%d\n",ans);

}
