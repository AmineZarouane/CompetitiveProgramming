class MinStack {
public:
    /** initialize your data structure here. */
    
    stack<pair<int,int> > st;
    MinStack() {
    }
    
    void push(int x) {
        int mn=x;
        if (!st.empty())
            mn=min(st.top().second,x);
        st.push({x,mn});
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */