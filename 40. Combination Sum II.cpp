class Solution {
public:
    void combination(int index, int target, vector<int>& arr,
                     vector<vector<int>>& answer, vector<int>& current) {

        if (target == 0) {
            answer.push_back(current);
            return;
        }
        for (int i = index; i < arr.size(); i++) {
            if (i > index && arr[i - 1] == arr[i])
                continue;
            if (arr[i] > target)
                break;
            
            current.push_back(arr[i]);
            combination(i + 1, target - arr[i], arr, answer, current);
            current.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> answer;
        vector<int> current;
        sort(candidates.begin(), candidates.end());
        combination(0, target, candidates, answer, current);
        return answer;
    }
};
