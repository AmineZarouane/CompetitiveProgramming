class Solution {
public:
    int cnt[26];
    int firstUniqChar(string s) {
        for(auto c : s)
            cnt[c - 'a']++;
        for(int i = 0 ; s[i] ; i++)
            if (cnt[s[i] - 'a'] == 1)
                return i;
        return -1;
    }
};