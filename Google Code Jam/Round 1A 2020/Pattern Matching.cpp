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

int main(){
    //IO
    int tc;
    cin >> tc;
    for(int t=1;t<=tc;t++){
        cout << "Case #" << t << ": ";
        ll i,j,k,n, idx, gmara=0, gmara2=0;
        cin>>n;
        string ans, pref,tmp , mid;
        vector<char>v,v1;
        string s[n];
        for(int i=0;i<n;i++)
            cin>>s[i];
 
        for(int i=0;i<n;i++){
            k=0;
            j=0;
            idx=(int)v.size();
            gmara=0;
            gmara2=0;
            while(s[i][j]!='*' && j<s[i].size()){
                if(j<idx && v[j]!=s[i][j]){
                    gmara=1;
                    break;
                  }
                if(j>=idx)
                    v.pb(s[i][j]);
                j++;
            }
            if(gmara){
                gmara2=1;
                break;
            }
          }
          if(gmara2){
            cout <<"*\n";
            continue ;
          }
          for(int i=0;i<n;i++){
            k=0;
            j=s[i].length()-1;
            idx=v1.size();
            gmara=0;
            gmara2=0;
            while(s[i][j]!='*' && j>=0){
                if(s[i].length()-1-j<idx && v1[s[i].length()-1-j]!=s[i][j]){
                    gmara=1;
                    break;
                  }
                if(s[i].length()-1-j >=idx)
                    v1.pb(s[i][j]);
                j--;
              }
            if(gmara){
                gmara2=1;
                break;
            }
          }
          if(gmara2)
          {
            cout << "*\n";
            continue ;
          }
 
          for(int i=0;i<n;i++){
            gmara=0;
            j=0;
            while(j<s[i].size()){
                if(s[i][j]=='*'){
                    gmara=1;
                    j++;
                }
                if(gmara){
                    while(s[i][j]!='*' && j<s[i].size())
                    {
                        tmp+=s[i][j];
                        j++;
                    }
                    if(j!=s[i].size())
                    {
                        ans+=tmp;
                        tmp="";
                    }
                    gmara=0;
                }
                else
                    j++;
 
 
              }
          }
          for(int i=0;i<(int)v.size();i++)
            ans=v[(int)v.size()-1-i]+ans;
          for(int i=0;i<(int)v1.size();i++)
            ans=ans+v1[(int)v1.size()-1-i];
          cout << ans << endl;
      }
}