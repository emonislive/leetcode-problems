class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> y, ans;
        for (int i = n; i < nums.size(); i++){
            y.push_back(nums[i]);
        }
        int j = 0, k = 0;
        for (int i = 0; i < nums.size(); i++){
            if (i % 2 == 0){
                ans.push_back(nums[j]);
                j++;
            }
            else {
                ans.push_back(y[k]);
                k++;
            }
        }
        return ans;
    }
};
