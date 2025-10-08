class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // ! explanation:
        // auto it = unique(nums.begin(), nums.end());  // move unique elements to front
        // nums.erase(it, nums.end());                  // erase the duplicates
        
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        return nums.size();
    }
};
