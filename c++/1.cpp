class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i, j, tot;
        for (i = 0; i < nums.size() - 1; i++){
            for (j = i+1; j < nums.size(); j++){
                tot = nums[i] + nums[j];
                if (tot == target)
                    return {i,j};
            }
        }
        return {};
    }
};
