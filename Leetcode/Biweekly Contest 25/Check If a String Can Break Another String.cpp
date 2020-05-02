class Solution {
public:
    int cnt[26];
    bool check(string s1,string s2){
        memset(cnt,0,sizeof cnt);
        for(auto c : s2)
            cnt[c - 'a']++;
        for(auto c : s1){
            int p = c - 'a';
            bool ok =false;
            for(int i = p ; i < 26 ; i++){
                if (cnt[i]){
                    ok = true;
                    cnt[i]--;
                    break;
                }
            }
            if (!ok)
                return false;
        }
        return true;
    }
    bool checkIfCanBreak(string s1, string s2) {
        return check(s1,s2) || check(s2,s1);
        
    }
};