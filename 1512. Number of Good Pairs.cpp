class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> freq;
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
            freq[nums[i]]++;

        for (auto& it : freq)
            if (it.second > 1)
                count += ((it.second * (it.second - 1)) / 2); // all possible pairs from a list formula = (n*(n-1))/2

        return count;
    }
};
