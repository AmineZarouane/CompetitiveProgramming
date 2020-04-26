#include <bits/stdc++.h>

using namespace std;

const int N=1e6+3;

#define pb push_back
#define all(x) (x).begin(),(x).end()
typedef long long ll;

const int dx[]={1,-1,0,0},
		  dy[]={0,0,1,-1};

const int inf=1e9;

int n,m,a[N][2],b[N],k,q,u,v,x,y,tc,c,l,r,ans,p,cnt;

char s[N];

bool ok[N];

int main(){
	
	scanf("%d %d",&n,&m);
	for(int i=0;i<m;i++){
		scanf("%d%d",&a[i][0],&a[i][1]);
	}
	for(int i=0;i<=999;i++){
		string s;
		int x=i;
		while(x){
			s+=(x%10)+'0';
			x/=10;
		}
		reverse(s.begin(),s.end());
		if (s.empty())
			s+='0';
		if (s.size()!=n)
			continue;
		bool ok=true;
		for(int i=0;i<m;i++){
			int p=a[i][0]-1;
			if (s[p]-'0'!=a[i][1])
				ok=false;
		}
		if (ok)
			return !printf("%s\n",s.c_str());
	}
	printf("-1\n");
}

