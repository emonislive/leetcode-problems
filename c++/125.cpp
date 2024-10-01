class Solution {
public:
    bool isPalindrome(string s) {
        string s2, s3;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        
        for (int i = 0; i < s.length(); i++) {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
                s2.push_back(s[i]);
            }
        }
        if (s2.length() == 0)
            return true;
      
        s3 = s2;
        reverse(s2.begin(), s2.end());
        
        if (s2 == s3)
            return true;
        else
            return false;
    }
};
