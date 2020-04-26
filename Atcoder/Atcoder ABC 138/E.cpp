#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int N=1e6+5;

int m,n,k,l,r,u,x,tc,y,q,d,a[N];


char s[N],t[N];

bool freq[26];

int len,sz,pos[N];

pair <int,ll> v[N];


ll ans;

vector<int> where[26];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    scanf("%s",s);
    sz=strlen(s);
    scanf("%s",t);
    len=strlen(t);
    for(int i=0;s[i];i++){
        freq[s[i]-'a']=true;
        where[s[i]-'a'].push_back(i);
    }
    for(int i=0;t[i];i++)
        if (!freq[t[i]-'a'])
            return !printf("-1\n");
    int i=0,last;
    while(true){
        ans+=sz;
        last=-1;
        while(i<len){
            int pos=upper_bound(where[t[i]-'a'].begin(),where[t[i]-'a'].end(),last)-where[t[i]-'a'].begin();
            if (pos>=(int)where[t[i]-'a'].size()){
                break;
            }
            last=where[t[i]-'a'][pos];
            i++;
        }
        if (i==len){
            ans-=sz-last-1;
            break;
        }
    }
    printf("%lld\n",ans);
}



