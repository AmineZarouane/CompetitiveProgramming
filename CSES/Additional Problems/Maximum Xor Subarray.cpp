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

int n,a[N],b[N],m,k,q,u,v,x,y,tc,l,r,c,ans;

char s[N],grid[N];

void IO(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("test.txt","r",stdin);
    #endif
}


int cnt;

int trie[N][2];

void push(int x){
    int cur = 0;
    for(int i = 29 ; ~i ; i--){
        bool bit = (1 << i) & x;
        if (!trie[cur][bit])
            trie[cur][bit] = ++cnt;
        cur = trie[cur][bit];
    }
}

int get(int x){
    int cur = 0;
    int ans = 0;
    for(int i = 29 ; ~i ; i--){
        bool bit = (1 << i) & x;
        int y;
        if (trie[cur][!bit])
            y = !bit;
        else
            y = bit;
        ans += (y << i);
        cur = trie[cur][y];
    }
    return ans;
}

int main(){
    //IO();
    scanf("%d",&n);
    int pre = 0; 
    push(0);
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&x);
        pre ^= x;
        ans = max(ans, pre ^ get(pre));
        push(pre);
    }
    printf("%d\n",ans);
}

