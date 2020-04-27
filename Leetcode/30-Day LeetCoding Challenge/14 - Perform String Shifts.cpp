class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        deque<char> dq;
        for(auto c:s)
            dq.push_back(c);
        for(auto x:shift)
            if (x[0] == 0)
                while(x[1]--)
                    dq.push_back(dq.front()),dq.pop_front();
            else
                while(x[1]--){
                    dq.push_front(dq.back()),dq.pop_back();
                }
        string r;
        while(!dq.empty())
            r+=dq.front(),dq.pop_front();
        return r;
    }
};