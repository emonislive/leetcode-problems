class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        string currentWord, previousWord;
        
        for (int i = 1; i < words.size(); i++) {
            previousWord = words[i - 1];
            currentWord = words[i];

            sort(previousWord.begin(), previousWord.end());
            sort(currentWord.begin(), currentWord.end());

            if (previousWord == currentWord) {
                words.erase(words.begin() + i);
                i--;
            }
        }
        return words;
    }
};
