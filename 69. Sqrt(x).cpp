class Solution {
public:
    int mySqrt(int x) {
        long long int leftIndex = 0;
        long long int rightIndex = 1LL * x;
        long long int result = 0;
        long long int mid = 0, square = 0;

        while (leftIndex <= rightIndex) {
            mid = leftIndex + ((rightIndex - leftIndex) / 2);
            square = mid * mid;
            
            if (square == x)
                return mid;
            else if (square > x)
                rightIndex = mid - 1;
            else {
                leftIndex = mid + 1;
                result = mid;
            }
        }
        return result;
    }
};
