class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int ans = 0;
        set<char> jewel;
        for(auto j : J)
            jewel.insert(j);
        for(auto c : S)
            ans += jewel.count(c);
        return ans;
    }
};