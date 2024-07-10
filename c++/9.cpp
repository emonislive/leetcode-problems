class Solution {
public:
    bool isPalindrome(int x) {
        long long int a = x, i, mod, rev;
        if (x < 0)
            return false;

        while (a > 0){
            mod = a % 10;           // gets the last num
            rev = rev * 10 + mod;   // reversing the num
            a = a / 10;             // gets the next last num
        }
        if (x == rev)
            return true;
        else
            return false;
        
    }
};
