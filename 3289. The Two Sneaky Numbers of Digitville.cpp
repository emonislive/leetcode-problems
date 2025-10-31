class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int> freq;

        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
            if (freq[nums[i]] != 2) {
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        return nums;
    }
};
