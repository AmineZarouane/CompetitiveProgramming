#include <bits/stdc++.h>
 
using namespace std;
 
const int N=1e6+5;
 
const int dx[]={0,1,-1,0},
		  dy[]={1,0,0,-1};
 
using ll = long long;
 
int n,m,tc,k,ans,a[N],cnt[2][2];
 
char s[N];
 
int one,zero;
 
 
 
int main()
{   
    scanf("%d",&tc);
    while(tc--){
    	int ans=-1;
    	ll sum=0;
    	scanf("%d",&n);
    	for(int i=0;i<n;i++)
    		scanf("%d",&a[i]),sum+=a[i];
    	double mean=(double)sum/n;
    	for(int i=0;i<n;i++){
    		if ((double)(sum-a[i])/(n-1) == mean){
    			ans=i+1;
    			break;
    		}
    	}
    	if (ans==-1)
    		printf("Impossible\n");
    	else
    		printf("%d\n",ans);
    }
}