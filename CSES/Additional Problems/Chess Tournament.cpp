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

int n,a[N],b[N],m,k,q,u,x,y,tc,l,r,c,ans;

char s[N],grid[N];

void IO(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("test.txt","r",stdin);
    #endif
}


struct cmp {
    bool operator() (const int& x, const int& y) const {
        return a[x] < a[y];
    }
};

int main(){
//  IO();
    scanf("%d",&n);
    multiset<int,cmp> s;
    for(int  i = 1 ; i <= n ; i++){
        scanf("%d",&a[i]);
        if (a[i])
            s.insert(i);
    }
    vector<pair<int,int> > v;
    while(sz(s)){
        auto px = s.begin();
        int x = *px;
        vector<int> removed;
        s.erase(px);
        while(a[x] && sz(s)){
            auto py = --s.end();
            int y = *py;
            s.erase(py);
            a[x]--;
            a[y]--;
            removed.push_back(y);
            v.push_back({x,y});
        }
        if (a[x])
            return !printf("IMPOSSIBLE\n");
        for(auto y : removed)
            s.insert(y);
    }
    printf("%d\n",sz(v));
    for(auto p : v)
        printf("%d %d\n",p.f, p.s);
}
