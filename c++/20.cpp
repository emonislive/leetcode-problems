class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char ch : s) {
            // push to stack if starting brackets are present
            if (ch == '(' || ch == '{' || ch == '[')
                st.push(ch);
            else {
                /*
                if stack is empty(0 char exits) or ending brackets are present
                in the string, then check if first bracket exist in the stack to
                see if the pattern is maintained or not.
                ex. ch = -> }, )  stack = {, (  <- (top), doesn't match , so it will return false,
                for true, ch = -> [, {  stack = } ] <- (top)
                */
                if (st.empty() || (ch == ')' && st.top() != '(') ||
                    (ch == '}' && st.top() != '{') ||
                    (ch == ']' && st.top() != '[')) {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};
