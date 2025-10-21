// O(n)
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        unordered_set<int> us;
        for (int i = 0; i < nums.size(); i++) { // O(n)
            us.insert(nums[i]);
        }

        int lcs = 1;
        int c = 0;
        int num = 0;
        for (auto it : us) {
            if (us.find(it - 1) == us.end()) {
                c = 1;
                num = it;
            }
            while (us.find(num + 1) != us.end()) {
                num++;
                c++;
            }
            lcs = max(c, lcs);
        }
        return lcs;
    }
};


// O(n log n)
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        sort(nums.begin(), nums.end()); // O(n log n)
        int c = 1, lcs = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] + 1 == nums[i]) {
                c++;
            } else if (nums[i - 1] == nums[i]) {
                continue;
            } else {
                lcs = max(c, lcs);
                c = 1;
            }
        }
        lcs = max(c, lcs);
        return lcs;
    }
};
