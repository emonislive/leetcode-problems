class Solution {
public:
    int reverse(int x) {
        int sign = (x < 0) ? -1 : 1;
        long long num64 = abs((long long)x); // int to long long int convert to avoid overflow + abs for handling negative sign case

        string numStr = to_string(x); // int to string convert
        std::reverse(numStr.begin(), numStr.end()); 

        long long revNum64 = stoll(numStr); // string to long long int convert

        if (revNum64 < INT_MIN || revNum64 > INT_MAX)
            return 0;

        return revNum64 * sign;
    }
};
