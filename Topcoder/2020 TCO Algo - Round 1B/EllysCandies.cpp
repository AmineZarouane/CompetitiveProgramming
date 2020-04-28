#include <bits/stdc++.h>
using namespace std;
class EllysCandies{
public:
	string getWinner(vector <int> boxes){
		if ((int)boxes.size()&1)
			return "Elly";
		else
			return "Kris";	
	}
};