class Solution {
public:
    void reverseString(vector<char>& s) {
        for (int i = s.size() - 1, j = 0; i >= 0, j < s.size() ; i--, j++) {
            if (i == j || i < j)
                break;
                
            swap(s[i], s[j]);
        }
    }
};
