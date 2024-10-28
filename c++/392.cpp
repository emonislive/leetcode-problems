class Solution {
public:
    bool isSubsequence(string s, string t) {
        int flag = 0, pos = 0;
        for (int i = 0; i < t.length(); i++) {
            if (s[pos] == t[i]){
                pos++;
                flag++;
            }
        }
        if (flag == s.length())
            return true;
        else
            return false;
    }
};
