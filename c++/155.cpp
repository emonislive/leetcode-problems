class MinStack {
public:
    MinStack() {
        stMin.push(INT_MAX); // a random value is added for future comparison
    }

    void push(int val) {
        st.push(val);
        stMin.push(min(val, stMin.top()));
    }

    void pop() {
        st.pop();
        stMin.pop();
    }

    int top() { return st.top(); }

    int getMin() { return stMin.top(); }

private:
    stack<int> st, stMin;
};
