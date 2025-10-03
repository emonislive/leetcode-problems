class Solution {
public:
    int climbStairs(int n) {
        int first = 0;
        int second = 1;
        int third = 0;
      
        if (n == 1) return 1;
        for (int i = 0; i < n; i++) {
            third = first + second;
            first = second;
            second = third;
        }
        return third;
    }
};
