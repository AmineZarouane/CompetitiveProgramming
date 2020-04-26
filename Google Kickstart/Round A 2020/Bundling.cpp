#include <bits/stdc++.h>

#define pb push_back
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
#define ll long long



using namespace std;

void file(){
	#ifndef ONLINE_JUDGE
    	freopen("in.txt", "r", stdin);
	#endif
}
int tc;
const int N=2e5+5,M=2e6+5,MOD=1e9+7,OO=1e9;

bool cmp(string &a,string &b){
	return sz(a)>sz(b);
}
void solve(int x){
	cout<<"Case #"<<x<<": ";
	//printf("Case #%d: ",x);
	int n,k;
	cin>>n>>k;
	map<string,int>occ;
	std::vector<string> v;
	string a;
	for(int i=0;i<n;i++){
		cin>>a;
		string curr = "";
		for(auto c : a){
			curr+=c,occ[curr]++;
			v.pb(curr);
		}
	}
	int ans = 0;
	sort(all(v),cmp);
	for (auto wa : v){
		if(occ[wa]>=k){
			//cout<<"   "<<wa<<endl;
			string curr = "";
			for(auto c : wa)curr+=c,occ[curr]-=k;
			ans+=sz(wa);
		}
	}
	cout<<ans<<"\n";
}
int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>tc;
	for(int i=1;i<=tc;i++)
		solve(i);
}		
