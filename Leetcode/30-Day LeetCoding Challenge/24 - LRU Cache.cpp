class LRUCache {
public:
    int n ;
    unordered_map<int,int> val;
    unordered_map<int,int> cnt;
    queue<int> q;
    LRUCache(int capacity) {
        n = capacity;
        val.clear();
    }
    
    int get(int key) {
        if (!val.count(key))
            return -1;
        q.push(key);
        cnt[key]++;
        return val[key];
    }
    
    void put(int key, int value) {
        if (!val.count(key) && (int) cnt.size() == n ){
            while (--cnt[q.front()])
                q.pop();
            cnt.erase(q.front());
            val.erase(q.front());
            q.pop();
        }
        val[key] = value;
        cnt[key]++;
        q.push(key);
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */