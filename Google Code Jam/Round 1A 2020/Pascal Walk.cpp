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
	//IO();
	scanf("%d",&tc);
	for(int t=1;t<=tc;t++){
		printf("Case #%d:\n",t);
		scanf("%d",&n);
		printf("1 1\n");
		n--;
		int r=2,c=1;
		int curr=1;
		while(n){
			if (n>=curr){
				n-=curr++;
			}
			else{
				n--;
				if (r!=c)
					r--;
			}
			printf("%d %d\n",r++,c++);
		}
	}

}