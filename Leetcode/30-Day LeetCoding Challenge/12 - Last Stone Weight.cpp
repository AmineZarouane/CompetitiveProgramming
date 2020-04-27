class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(auto x:stones)
            pq.push(x);
        while(!pq.empty()){
            int x = pq.top();
            pq.pop();
            if (pq.empty())
                return x;
            int y = pq.top();
            pq.pop();
            if (x!=y)
                pq.push(x-y);
        }
        return 0;
    }
};