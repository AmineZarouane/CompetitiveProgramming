class Solution {
public:
    int findComplement(int num) {
        int x = num;
        int ret = 0;
        for(long long y = 1 ; (long long)y <= x ; y*=2)
            if (!(x & y))
                ret += y;
        return ret;
    }
};