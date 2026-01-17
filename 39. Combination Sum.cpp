class Solution {
public:
    void uniqueCombination(int index, int target, vector<int>& arr, vector<vector<int>>& answer, vector<int>& tempArr) {
        int outOfBound = arr.size();
        
        if (index == outOfBound) {
            if (target == 0) {
                answer.push_back(tempArr);
            }
            return;
        }
        // accepting the index value
        if (arr[index] <= target) {
            tempArr.push_back(arr[index]);
            uniqueCombination(index, target - arr[index], arr, answer, tempArr);
            tempArr.pop_back(); // while backtracking removing the old taken value
        }
        // rejecting the index value and going to the next index
        uniqueCombination(index + 1, target, arr, answer, tempArr);
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> answer;
        vector<int> tempArr;
        
        uniqueCombination(0, target, candidates, answer, tempArr);
        return answer;
    }
};
