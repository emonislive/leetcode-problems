class MyStack {
public:
    MyStack() {}

    void push(int x) { 
        st.push(x); 
    }
    int pop() {
        int lastNum = st.top();
        st.pop();
        return lastNum;
    }
    int top() {
        int lastNum = st.top();
        return lastNum;
    }
    bool empty() {
        return st.empty();
    }
private:
    stack<int> st;
};
