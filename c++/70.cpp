class Solution {
public:
    int climbStairs(int n) {
        if (n == 1)
            return n;
        else {
            int first = 1;
            int second = 2;
            int third;
            for (int i = 3; i <= n; i++) {
                third = first + second;
                first = second;
                second = third;
            }
            return second;
        }
    }
};
