class Solution {
public:
    bool isPalindrome(string s) {
        if (s.size() == 1)
            return true;

        transform(s.begin(), s.end(), s.begin(), ::tolower); // convert full string into lowercase.

        for (int i = 0, j = s.size() - 1; i < j;) {
            if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))) // if not [a-z] or [0-9] for [i]-index
                i++;
            else if (!((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= '0' && s[j] <= '9'))) // if not [a-z] or [0-9] for [j]-index
                j--;
            else if (s[i] != s[j])
                return false;
            else {
                i++;
                j--;
            }
        }
        return true;
    }
};
