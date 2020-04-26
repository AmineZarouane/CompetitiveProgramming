class Solution {
public:
    bool checkValidString(string s) {
        stack <int> st;
        stack <int> asterisk;
        for(int i=0;s[i];i++){
            char c = s[i];
            if (c == '(')
                st.push(i);
            else if (c == ')'){
                if (!st.empty())
                    st.pop();
                else if (!asterisk.empty())
                    asterisk.pop();
                else
                    return false;
            }
            else
                asterisk.push(i);
        }
        while(!st.empty()){
            int x = st.top();
            st.pop();
            if (!asterisk.empty() && asterisk.top()>x)
                asterisk.pop();
            else
                return false;
        }
        return true;
    }
};