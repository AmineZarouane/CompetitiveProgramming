#include <bits/stdc++.h>
 
using namespace std;
 
const int N=1e6+5;
 
const int dx[]={0,1,-1,0},
		  dy[]={1,0,0,-1};
 
using ll = long long;
 
int n,m,tc,k,ans,a[N];
char s[N];
 
int mod(char* num, int a) 
{ 
    int res = 0; 
  
    for (int i = 0; num[i]; i++) 
         res = (res*10 + (int)num[i] - '0') %a; 
    return res; 
} 
 
int main()
{
    scanf("%d",&tc);
    while(tc--){
    	scanf("%d",&n);
    	scanf("%s",s);
    	int x=mod(s,n);
    	if (x>=(n+1)/2)
    		x=n-x;
    	printf("%d\n",min(n-1,x*2));
    }
}