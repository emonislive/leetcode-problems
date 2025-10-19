class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> range;
        if (nums.empty())
            return range;

        int startRange = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1] + 1) {
                if (nums[i - 1] == startRange)
                    range.push_back(to_string(startRange));
                else
                    range.push_back(to_string(startRange) + "->" + to_string(nums[i - 1]));

                startRange = nums[i];
            }
        }

        if (nums.back() == startRange) 
            range.push_back(to_string(nums.back()));
        else 
            range.push_back(to_string(startRange) + "->" + to_string(nums.back()));

        return range;
    }
};
