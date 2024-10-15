class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.length() == 1) {
            for (int i = 0; i < haystack.length(); i++) {
                if (haystack.substr(i, needle.length()) == needle)
                    return i;
            }
        }
        else if (needle.length() == 2) {
            for (int i = 0; i < haystack.length() - 1; i++) {
                if (haystack.substr(i, needle.length()) == needle)
                    return i;
            }
        }
        else {
            for (int i = 0; i <= haystack.length() - 3; i++) {
                if (haystack.substr(i, needle.length()) == needle) {
                    return i;
                }
            }
        }

        return -1;
    }
};
