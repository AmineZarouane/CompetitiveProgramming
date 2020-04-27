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

int main(){
	//IO();
	scanf("%d",&tc);
	while(tc--){
		scanf("%s",s);
		n = strlen(s);
		bool cyclic=true;
		for(int i = 2 ; s[i] ; i++){
			if (s[i] != s[i-2])
				cyclic = false;
		}
		if (n<=2 || (cyclic && ((s[0] == s[1]) || ((n%2) == 0))))
			printf("YES\n");
		else
			printf("NO\n");
	}
}