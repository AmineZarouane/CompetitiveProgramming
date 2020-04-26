#include <bits/stdc++.h>

using namespace std;

class ValueDivision{
public:
  vector<int> getArray(vector<int> A){
    int n = (int)A.size();
    map<int,vector<int> > freq;
    for(int i = 0 ; i <n ; i++)
      freq[A[i]].push_back(i);
    for(auto it = freq.rbegin() ; it!=freq.rend() ; it++){
      if (it->first == 1)
        break;
      vector <int> &v = it->second;
      sort(v.begin(),v.end());
      for(int i=0;i<(int)v.size()-1;i++){
        A[v[i]]--;
        freq[A[v[i]]].push_back(v[i]);
      }
    }
    return A;
  }
};