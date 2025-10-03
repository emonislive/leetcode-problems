class Solution {
public:
    int lengthOfLastWord(string s) {
        istringstream iss(s);

        string word;
        int lastWordLen = 0;

        while (iss >> word) {
            lastWordLen = word.length();
        }
        return lastWordLen;
    }
};
