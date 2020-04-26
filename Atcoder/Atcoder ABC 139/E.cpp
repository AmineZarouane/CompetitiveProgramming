#include <bits/stdc++.h>

#define ll long long
 
const int N=3e5+5,MAX=3e7,MOD=1e9+7,M=1007;
 
using namespace std;

std::vector<int> g[M];
int n,days[M];
bool games[M];

int main()
{
    scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1,x;j<n;j++){
			scanf("%d",&x);
			g[i].push_back(x);
		}
	}
	for(int i=1;i<=50000;i++){
		memset(games,0,sizeof(games));
		bool ok = false;
		for(int j=1;j<=n;j++){
			if(games[j] || days[j]==n-1)continue;
			int op = g[j][days[j]];
			if(games[op])continue;
			if(g[op][days[op]]==j){
				ok = true;
				days[op]++;
				days[j]++;
				games[op]=games[j]=true;
			}
		}

		if(!ok)return !printf("-1\n");
		int cnt = 0;
		for(int j=1;j<=n;j++)cnt+=(days[j]==(n-1));

		if(cnt==n)return !printf("%d\n",i );

	}

	printf("%d",n*(n-1)/2);
}	
