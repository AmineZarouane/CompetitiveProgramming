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

int n,a,b,c;

int& get(char cc){
    if (cc == 'A')
        return a;
    else if (cc == 'B')
        return b;
    else
        return c;
}

vector<int> nxt[3];

int main(){
    IO();
    cin >> n >> a >> b >> c;
    int zeros = (a == 0) + (b == 0) + (c == 0);
    vector<char> v;
    vector<string> ss(n);
    for(int i = 0 ; i < n ; i++){
        cin >> ss[i];
        nxt[ss[i][0] - 'A'].push_back(i);
        nxt[ss[i][1] - 'A'].push_back(i);
    }
    for(int i = 0 ; i < n ; i++){
        string& s = ss[i];
        int& x = get(s[0]);
        int& y = get(s[1]);
        if (!x){
            x++;
            y--;
            v.push_back(s[0]);
        }
        else if (!y){
            y++;
            x--;
            v.push_back(s[1]);
        }
        else if (x > 1 || y > 1){
            if (x < y){
                x++;
                y--;
                v.push_back(s[0]);
            }
            else{
                x--;
                y++;
                v.push_back(s[1]);
            }
        }
        else{
            int p = s[0] - 'A';
            int nxt_x = upper_bound(nxt[p].begin(),nxt[p].end(),i) - nxt[p].begin();
            if (nxt_x == sz(nxt[p]))
                nxt_x = 1e9;
            else
                nxt_x = nxt[p][nxt_x];
            p = s[1] - 'A';
            int nxt_y = upper_bound(nxt[p].begin(),nxt[p].end(),i) - nxt[p].begin();
            if (nxt_y == sz(nxt[p]))
                nxt_y = 1e9;
            else
                nxt_y = nxt[p][nxt_y];
            if (nxt_x < nxt_y){
                x++;
                y--;
                v.push_back(s[0]);
            }
            else{
                x--;
                y++;
                v.push_back(s[1]);
            }
        }
        if (a < 0 || b < 0 || c < 0){
            assert(zeros >= 2);
            return !printf("No\n");
        }
    }
    printf("Yes\n");
    for(auto c : v)
        printf("%c\n",c);
}
