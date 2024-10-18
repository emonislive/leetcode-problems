class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits; // ex. [9 2 2 9] + 1 = [9 2 (3) 0], we return the vector to avoid increasing other numbers.
            }
            else
                digits[i] = 0;
        }
        // if all the inputs are 9, ex. [9 9 9] + 1 => [1 0 0 0]
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
