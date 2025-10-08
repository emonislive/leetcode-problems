class Solution {
public:
    int strStr(string haystack, string needle) {
        int sizeHaystack = haystack.size();
        int sizeNeedle = needle.size();

        if (sizeNeedle > sizeHaystack)
            return -1;

        for (int i = 0; i < sizeHaystack; i++) {
            if (haystack.substr(i, sizeNeedle) == needle) {
                return i;
            }
        }
        return -1;
    }
};
