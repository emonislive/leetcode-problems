class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int miss = -1;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (i != nums[i]) {
                miss = i;
                break;
            }
        }
        if (miss == -1)
            return nums.size();
        else
            return miss;
    }
};
