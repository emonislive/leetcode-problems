class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int beforeLen = nums.size();
        // sorting the numbers asc to desc order
        sort(nums.begin(), nums.end());
        // now removing duplicates
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        // new length will decrese because if there were duplicates, we have removed them, so the length will decrease
        // ex. before: 1 1 2 3 (len = 4), after: 1 2 3 (len = 3)
        int afterLen = nums.size();

        if (beforeLen != afterLen)
            return true;
        else
            return false;
    }
};
