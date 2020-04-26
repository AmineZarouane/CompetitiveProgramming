#include <bits/stdc++.h>

using namespace std;

const int N=1e6+5;

const int dx[]={0,1,-1,0},
		  dy[]={1,0,0,-1};

typedef long long ll;

int n,m,tc,k,ans,a[N],q,x,p;

char s[N];

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("gen.txt","r",stdin);
    #endif
    scanf("%d",&tc);
    while(tc--){
        ans=1e9;
        int pos=-1;
    	scanf("%d",&n);
    	for(int i=0;i<n-1;i++)
    		scanf("%d",&a[i]);
    	scanf("%d",&p);
    	for(int i=0;i<n-1;i++){
    		int l1=0,r1=i-1,l2=i,r2=n-2,sz1=r1-l1+1,sz2=r2-l2+1;
    		int lcnt=1,rcnt=1,armor=0;
    		while(true){
    			if (sz1+sz2==1){
    				break;
    			}
    			//left
    			if (sz1>=1){
    				if (sz1%2==0)
    					r1-=lcnt;
                    else
                        armor+=a[r1];
    				lcnt*=2;
    				sz1=(sz1+1)/2;
    			}
    			//right
    			if (sz2>=1){
    				if (sz2&1){
                        if (sz1>=1)
                            l1+=lcnt,sz1--;
    					else
    						armor+=a[r2];
    				}
    				else
    					r2-=rcnt;
    				rcnt*=2;
    				sz2=(sz2+1)/2;
    			}
    		}
    		int last=a[i];
            if (last<=p){
                if (armor+p<ans)
                    pos=i+1;
                ans=min(ans,armor+p);
            }
    	}
    	if (pos!=-1){
            printf("possible\n");
            printf("%d %d\n",pos,ans);
    	}
    	else
            printf("impossible\n");
    }
}