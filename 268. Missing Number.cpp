class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missingNum = -1;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != i) {
                missingNum = i;
                break;
            }
        }
        if (missingNum == -1)
            return nums.size();

        return missingNum;
    }
};
