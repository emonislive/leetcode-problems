class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len1 = word1.length();
        int len2 = word2.length();
        int pos = 0, pos2 = 0;
        string mergeWord;
        if (len1 == len2) {
            for (int i = 0; i < len1 + len2; i++) {
                if (i % 2 == 0) {
                    mergeWord.push_back(word1[pos]);
                    pos++;
                } else {
                    mergeWord.push_back(word2[pos2]);
                    pos2++;
                }
            }
        } else {
            if (len1 > len2) {
                for (int i = 0; i < len1 + len2; i++) {
                    if (pos2 >= len2) {
                        mergeWord.push_back(word1[pos]);
                        pos++;
                    } else {
                        if (i % 2 == 0) {
                            mergeWord.push_back(word1[pos]);
                            pos++;
                        } else {
                            mergeWord.push_back(word2[pos2]);
                            pos2++;
                        }
                    }
                }
            } else {
                for (int i = 0; i < len2 + len1; i++) {
                    if (pos >= len1) {
                        mergeWord.push_back(word2[pos2]);
                        pos2++;
                    } else {
                        if (i % 2 == 0) {
                            mergeWord.push_back(word1[pos]);
                            pos++;
                        } else {
                            mergeWord.push_back(word2[pos2]);
                            pos2++;
                        }
                    }
                }
            }
        }
        return mergeWord;
    }
};
