class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> even, odd;
        for (int i = 0; i < nums.size(); i++) {
            if(nums[i] % 2 == 0)
                even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end(), greater());
        for (int i = 0; i < even.size(); i++) {
            nums[i] = even[i];
        }
        int pos = even.size();
        for (int i = 0; i < odd.size(); i++) {
            nums[pos] = odd[i];
            pos++;
        }
        return nums;
    }
};
