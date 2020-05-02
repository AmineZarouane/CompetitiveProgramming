//#pragma GCC optimize ("O3")
//#pragma GCC target ("sse4")
#include <bits/stdc++.h>

using namespace std;


const int N=1e6+3,M=1e3+5;

const double eps=1e-9;

#define pb push_back
#define all(x) (x).begin(),(x).end()
#define sz(x) (int)(x).size()
#define f first
#define s second
typedef long long ll;
typedef unsigned long long ull;

const int dx[]={1,-1,0,0},
          dy[]={0,0,1,-1};

const int mod=1e9+7;

void IO(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("test.txt","r",stdin);
    #endif
}

char s[N];

int n,cnt[26];

int main(){
//    IO();
    string ans;
    scanf("%s",s);
    n = strlen(s);
    for(int i = 0 ; s[i] ; i++)
        cnt[s[i] - 'A']++;
    for(int i = 0 ; i < 26 ; i++)
        if (cnt[i] > (n + 1) / 2)
            return !printf("-1\n");
    int last = -1;
    while(n--){
        int j = -1;
        for(int i = 0 ; i < 26 ; i++)
            if (i != last)
                if (cnt[i] > (n + 1) / 2)
                    j = i;  
                else if (cnt[i] && j == -1)
                    j = i;
        cnt[j]--;
        last = j;
        ans += 'A' + j;
    }
    printf("%s\n",ans.c_str());
}
