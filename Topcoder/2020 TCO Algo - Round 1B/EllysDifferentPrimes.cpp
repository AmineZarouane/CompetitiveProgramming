#include <bits/stdc++.h>

using namespace std;
 
class EllysDifferentPrimes{
public:
	bool prime(int n){
		if (n <= 1)
			return false;
		int x = n;
		set<int> vis;
		while (x){
			if (vis.count(x%10))
				return false;
			vis.insert(x%10);
			x/=10;
			
		}
		for(int i = 2 ; (long long) i * i <= n ; i++)
			if (n % i == 0)
				return false;
		return true;
	}
	
	int getClosest (int N){
		for(int i = 0 ; ; i++){
			if (prime(N-i))
				return N-i;
			if (prime(N+i))
				return N+i;
		}
	}
};