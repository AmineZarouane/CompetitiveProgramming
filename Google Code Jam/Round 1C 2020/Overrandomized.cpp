//#pragma GCC optimize ("O3")
//#pragma GCC target ("sse4")
#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define all(x) (x).begin(),(x).end()
#define sz(x) (int)(x).size()
#define f first
#define s second
typedef long long ll;
typedef unsigned long long ull;

void IO(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("test.txt","r",stdin);
    #endif
}

const int N=1e6+3,M=1e3+5,mod=1e9+7,dx[]={1,-1,0,0},
                                    dy[]={0,0,1,-1};
const double eps=1e-9;


int tc;

char s[N];

pair<ll,string> p[N];


int main(){
    //IO();   
    cin >> tc;
    for(int t = 1 ; t <= tc ; t++){
        cout << "Case #" << t << ": "; 
        int u;
        cin >> u;
        int n = 1e4;
        map<char, int> m1, m2;
        for(int i = 0 ; i < n ; i++){
            string x, y;
            cin >> x >> y;
            bool unknown = x[0] == '-' ? u == sz(y) : sz(x) == sz(y);
            if(unknown)
                m1[y[0]]++;
            else
                m2[y[0]]++;
            for(int j = 1; y[j] ; j++)
                m2[y[j]]++;
        }
        vector<pair<int, char>> suffix;
        string ans;
        for(char c = 'A'; c <= 'Z'; c++){
            if(!m1[c] && m2[c] > 0)
                ans += c;
            if(m1[c] > 0)
                suffix.push_back(make_pair(m1[c], c));
        }
        sort(suffix.rbegin(), suffix.rend());
        for(int i=0; i < sz(suffix); i++)
            ans += suffix[i].second;
        cout << ans << endl;
    }
}
