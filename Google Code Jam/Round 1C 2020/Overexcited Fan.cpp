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

int main(){
    //IO();
    scanf("%d",&tc);
    for(int t = 1 ; t <= tc ; t++){
        int ans = -1;
        printf("Case #%d: ",t);
        int x,y;
        scanf("%d %d",&x,&y);
        scanf("%s",s);
        int n = strlen(s);
        int xx = 0, yy = 0;
        for(int i = 0 ; s[i] ; i++){
            if (s[i] == 'S')
                y--;
            else if (s[i] == 'N')
                y++;
            else if (s[i] == 'W')
                x--;
            else
                x++;
            if (abs(x) + abs(y) <= i + 1){
                ans = i + 1;
                break;
            }
        }
        if (ans == -1)
            printf("IMPOSSIBLE\n");
        else
            printf("%d\n",ans);
    }
}
