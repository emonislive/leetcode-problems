class Solution {
public:
    int hammingWeight(int num) {
        int countOne = 0;
        while (num > 0) {
            if (num % 2 == 1) countOne++;
            num /= 2;
        }
        return countOne;
    }
};
