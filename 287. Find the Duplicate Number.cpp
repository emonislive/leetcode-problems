class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int digit = 0;
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            digit = nums[i - 1] ^ nums[i]; // a ^ a = 0, a ^ b = a
            if (digit == 0) {
                digit = nums[i];
                break;
            }
        }
        return digit;
    }
};
