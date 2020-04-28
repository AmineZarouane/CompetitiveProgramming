#include <bits/stdc++.h>
using namespace std;

class EllysWhatDidYouGet{
public:
		int getCount(int N){
			int ans = 0;
			for(int x=1;x<=50;x++){
				for(int y=1;y<=50;y++){
					for(int z=1;z<=50;z++){
						int X = (x + y) * z;
						int sum = 0;
						while(X){
							sum+=X%10;
							X/=10;
						}
						bool valid = true;
						for(int i=2;i<=N;i++){
							int X = (x*i + y) * z;
							int curr = 0;
							while(X){
								curr+=X%10;
								X/=10;
							}
							if(curr!=sum)
								valid=false;
						}
						ans+=valid;
					}
				}
			}
			return ans;
		}
};