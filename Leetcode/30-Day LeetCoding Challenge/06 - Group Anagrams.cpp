#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
class Solution {
public:
    #define ll long long
    int cnt[26];
    
    int hash(){
        int ret=0,pw=1;
        const int p  = 31,mod = 1e9+9;
        for(int i=0;i<26;i++){
            int add = (ll)(cnt[i]+1) * pw%mod;
            ret = (ret + add )%mod;
            pw = (ll)pw * p % mod;
        }
        return ret;
    }
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        gp_hash_table <int,vector<string> > anagram;
        vector<vector<string> > ans;
        for(const auto &s:strs){
            memset(cnt,0,sizeof cnt);
            for(const auto &c:s)
                cnt[c-'a']++;
            int h = hash();
            anagram[h].push_back(s);
        }
        for (const auto &v:anagram)
            ans.push_back(v.second);
        return ans;
    }
};