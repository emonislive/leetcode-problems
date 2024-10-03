class Solution {
public:
    int total = 0;
    void pop() { 
        int lastNum = st.top();
        total -= lastNum;
        st.pop(); 
    }
    void push(int strToNum) {
        total += strToNum;
        st.push(strToNum);
    }
    void pushD() {
        int lastNum = st.top();
        lastNum *= 2;
        total += lastNum;
        st.push(lastNum);
    }
    void pushP() {
        int lastNum = st.top();
        st.pop();
        int secLastNum = st.top();
        st.push(lastNum);
        int add = lastNum + secLastNum;
        total += add;
        st.push(add);
    }

    int calPoints(vector<string>& operations) {
        int strToNum;
        for (int i = 0; i < operations.size(); i++) {
            string s = operations[i];

            if (s == "C")
                pop();
            else if (s == "D")
                pushD();
            else if (s == "+")
                pushP();
            else {
                strToNum = stoi(s);
                push(strToNum);
            }
        }
        return total;
    }

private:
    stack<int> st;
};
