#include <bits/stdc++.h>

using namespace std;

const int N=1e6+3;

const double eps=1e-9;

#define pb push_back
#define all(x) (x).begin(),(x).end()
#define sz(x) (int)(x).size()
#define f first
#define s second
typedef long long ll;

const int dx[]={1,-1,0,0},
          dy[]={0,0,1,-1};

const int mod=1e9+7,MOD=998244353;

int n,a[N],b[N],m,k,q,u,v,x,y,tc,l,r,c,ans,cnt[N];

char s[N],grid[N];

void IO(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("test.txt","r",stdin);
    #endif
}

void print(){
    string ans;
    for(int i=1;i<=n;i++)
        ans+='0'+a[i];
    printf("%s\n",ans.c_str());
    fflush(stdout);
    scanf("%s",s);
}

int get(int x){
    printf("%d\n",x);
    fflush(stdout);
    scanf("%d",&x);
    return x;
}

int main(){
    //IO();
    scanf("%d%d",&tc,&n);
    for(int t=1;t<=tc;t++){
        memset(a,0,(n+1)*sizeof(int));
        int l=1,r=n,eq=-1,cnt=1,df=-1;
        for(int q=1;q<=150 && l<=r;q++){
            if (q%10 == 1 && q>1){
                q+=(eq!=-1 && df!=-1);
                if (eq!=-1 && (a[eq]!=get(eq)))
                    for(int i=1;i<=n;i++)
                        a[i]^=1;
                if (df!=-1 && (a[df]!=get(df)))
                    reverse(a+1,a+n+1);
            }
            else{
                if (cnt&1)
                    a[l]=get(l),l++;
                else{
                    a[r]=get(r);
                    if (a[l-1]==a[r--])
                        eq=l-1;
                    else
                        df=l-1;
                }
                if (q%10 == 0 && (cnt&1))
                    l--;
                else
                    cnt++;
            }
        }
        print();
    }
}

