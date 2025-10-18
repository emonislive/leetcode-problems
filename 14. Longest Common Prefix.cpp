class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
            return "";
        if (strs.size() == 1)
            return strs[0];

        string leftIndex = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            string rightIndex = strs[i];
            string lcp = "";

            for (int j = 0; j < min(leftIndex.size(), rightIndex.size()); j++) {
                if (leftIndex[j] == rightIndex[j])
                    lcp += leftIndex[j];
                else
                    break;
            }
            leftIndex = lcp;

            if (leftIndex.empty())
                return "";
        }
        return leftIndex;
    }
};
