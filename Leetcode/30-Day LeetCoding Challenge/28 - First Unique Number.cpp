class FirstUnique {
public:
    unordered_map<int,int> cnt;
    queue<int> q;
    FirstUnique(vector<int>& nums) {
        for(int& x : nums)
            if (!cnt[x]++)
                q.push(x);
    }
    
    int showFirstUnique() {
        while(!q.empty()){
            int x = q.front();
            if ( cnt[x] > 1 )
                q.pop();
            else
                return x;
        }
        return -1;
    }
    
    void add(int value) {
        if (!cnt[value]++)
            q.push(value);
    }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */