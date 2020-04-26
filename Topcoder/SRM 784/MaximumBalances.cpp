#include <bits/stdc++.h>
using namespace std;

class MaximumBalances{
public:
  int solve(string s){
    int o=0,c=0;
    for (int i=0;s[i];i++){
      o+=s[i]=='(';
      c+=s[i]==')';
    }
    int mn = min(o,c);
    return mn*(mn+1)/2;
  }
};