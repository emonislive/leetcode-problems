class Solution {
public:
    int mySqrt(int x) {
        int start = 0;
        int end = x;
        int round;
        while (start <= end) {
            int mid = start + ((end - start) / 2);
            if (static_cast<long long>(mid) * mid == x)
                return mid;
            else if (static_cast<long long>(mid) * mid < x) {
                start = mid + 1;
                round = mid;
            }
            else
                end = mid - 1;
        }
        return round;
    }
};
