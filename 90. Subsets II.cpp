class Solution {
private:
    void findSubset(int index, vector<int>& arr, vector<vector<int>>& answer, vector<int>& current) {
        answer.push_back(current);
        for (int i = index; i < arr.size(); i++) {
            if (i != index && arr[i] == arr[i - 1])
                continue;
            current.push_back(arr[i]);
            findSubset(i + 1, arr, answer, current);
            current.pop_back();
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> answer;
        vector<int> current;
        sort(nums.begin(), nums.end());
        findSubset(0, nums, answer, current);
        return answer;
    }
};
