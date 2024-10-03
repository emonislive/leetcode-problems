class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> c;
        int ans;
        for (int i = 0; i < nums.size(); i++) {
            c[nums[i]]++;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (c[nums[i]] == 1) {
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
};
