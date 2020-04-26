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
	IO();
	scanf("%d",&tc);
	while(tc--){
		scanf("%s",s);
		int o = 0;
		int z = 0;
		for(int i=0;s[i];i++){
			if (s[i] == '1')
				o++;
			else
				z++; 
		}
		if (!o || !z){
			printf("%s\n",s);
			continue;
		}
		n = strlen(s);
		printf("%c",s[0]);
		for(int i=1;i<n;i++){
			if (s[i-1] == s[i]){
				if (s[i] == '1')
					printf("0");
				else
					printf("1");
			}
			printf("%c",s[i]);
		}
		printf("\n");
	}
}