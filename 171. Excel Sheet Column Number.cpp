class Solution {
public:
    int titleToNumber(string columnTitle) {
        int sum = 0;
        for (int i = columnTitle.size() - 1, j = 0; i >= 0; i--, j++) {
            int charValue = columnTitle[i] - 'A' + 1;
            sum += pow(26, j) * charValue; 
        }
        return sum;
    }
};
