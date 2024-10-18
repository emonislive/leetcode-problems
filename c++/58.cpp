class Solution {
public:
    int lengthOfLastWord(string s) {
        string s2;
        int flag = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == ' ' && flag == 0) {
                continue;
            }
            if (s[i] == ' ' && flag != 0)
                break;
            else {
                s2.push_back(s[i]);
                flag = 1;
            }
        }
        return s2.length();
    }
};
