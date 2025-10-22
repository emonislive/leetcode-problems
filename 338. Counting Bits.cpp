class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> vec;
        int digit = 0;
        int count = 0;
        int number = 0;

        for (int i = 0; i <= n; i++) {
            number = i;
            count = 0;
            while (number > 0) {
                digit = number % 2;
                if (digit == 1) {
                    count++;
                }
                number /= 2; 
            }
            vec.push_back(count);
        }
        return vec;
    }
};
