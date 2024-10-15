class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        
        auto newEnd = remove(nums.begin(), nums.end(), 0);
        nums.erase(newEnd, nums.end());
        
        int zeroLen = len - nums.size();
        
        for (int i = 0; i < zeroLen; i++) {
            nums.push_back(0);
        }
        for (int i = 0; i < nums.size(); i++) {
            cout << nums[i];
        }
        cout << '\n';
    }
};
