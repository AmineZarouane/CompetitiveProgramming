class Solution {
public:
    int cnt[26];
    bool canConstruct(string ransomNote, string magazine) {
        for(auto c : ransomNote)
            cnt[c - 'a']--;
        for(auto c : magazine)
            cnt[c - 'a']++;
        bool ok = true;
        for(int i = 0 ; i < 26 ; i++)
            ok &= cnt[i] >= 0;
        return ok;
    }
};