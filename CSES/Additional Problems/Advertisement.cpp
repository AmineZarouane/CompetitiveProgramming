#include <bits/stdc++.h>
 
using namespace std; 
 
const int N=1e6+5,MOD=1e9+7,M=1e4;
 
const int dx[]={0,1,-1,0},
          dy[]={1,0,0,-1};
 
typedef long long ll;
 
int n,k,m,a[N],b[N],q,u,x,y,tc,c,v,l,r,cnt,ans;
 
char s[N];

int L[N],R[N];
 
int main(){
    //freopen("test.txt","r",stdin);
    ll ans = 0;
    scanf("%d",&n);
    stack<int> st;
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&a[i]);
        while(!st.empty()){
            if (a[st.top()] < a[i])
                break;
            st.pop();
        }
        x = 0;
        if (!st.empty())
            x = st.top() + 1;
        L[i] = x;
        st.push(i);
    }
    while(!st.empty())
        st.pop();
    for(int i = n - 1 ; ~i ; i--){
        while(!st.empty()){
            if (a[st.top()] < a[i])
                break;
            st.pop();
        }
        x = n - 1;
        if (!st.empty())
            x = st.top() - 1;
        R[i] = x;
        st.push(i);
    }
    for(int i = 0 ; i < n ; i++)
        ans=max(ans, (ll)(R[i] - L[i] + 1) * a[i]);
    printf("%lld\n",ans);
}