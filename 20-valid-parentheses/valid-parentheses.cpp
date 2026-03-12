class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            // If it's an opening bracket, push it onto the stack
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                // If it's a closing bracket, check if stack is empty or mismatched
                if (st.empty()) return false;
                if (c == ')' && st.top() != '(') return false;
                if (c == '}' && st.top() != '{') return false;
                if (c == ']' && st.top() != '[') return false;
                st.pop(); // Matching pair found, remove the opener
            }
        }
        return st.empty(); // If stack is empty, all brackets were matched
    }
};