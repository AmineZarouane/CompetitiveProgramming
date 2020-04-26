#include <bits/stdc++.h>

using namespace std;

const int N=1e6+5;

const int dx[]={0,1,-1,0},
		  dy[]={1,0,0,-1};

typedef long long ll;

int n,m,tc,k,ans,a[N],q,x,cnt[10];

char s[N];

vector<pair<ll,int> >v;

vector<int> factor;

int main()
{
//    #ifndef ONLINE_JUDGE
//        freopen("test.txt","r",stdin);
//    #endif
    scanf("%d",&tc);
    while(tc--){
        memset(cnt,0,sizeof cnt);
        factor.clear();
        v.clear();
        bool ok=false;
    	printf("1 63254\n");
    	fflush(stdout);
    	scanf("%d",&x);
    	ll p=4001068516-x;
    	for(int i=2;(ll)i*i<=p;i++){
    		if (p%i==0){
                while(p%i==0)
                    p/=i;
                if (4001068516%i==x)
                    factor.push_back(i);
    		}
    	}
    	if (p!=1 && (4001068516%p==x))
            factor.push_back(p);
        int ask=-1,mn=1e9;
    	for(int i=0;i<(int)factor.size();i++){
            set<int> vis;
//            printf("%d : ",factor[i]);
            for(int j=0;j<(int)factor.size();j++){
                if (i==j)
                    continue;
                int prod=((ll)factor[i]*factor[i])%factor[j];
                if (vis.count(prod)){
//                    printf(" %d|%d ",factor[j],prod );
                    cnt[i]++;
                }
                vis.insert(prod);
            }
//            printf("\n");
    	}
    	for(int i=0;i<(int)factor.size();i++){
            if (cnt[i]<mn)
                ask=factor[i];
            mn=min(mn,cnt[i]);
    	}
    	printf("1 %d\n",ask);
        fflush(stdout);
        scanf("%d",&x);
        v.push_back({(ll)ask*ask,x});
        int cnt=0;
        for(int i=0;i<factor.size();i++){
            int can=factor[i];
            if (v[0].first%can==(ll)v[0].second){
                cnt++;
                ans=can;
            }
        }
        if (cnt!=1)
            x/=0;
        else{
            printf("2 %d\n",ans);
            fflush(stdout);
            scanf("%s",s);
        }
    }
}