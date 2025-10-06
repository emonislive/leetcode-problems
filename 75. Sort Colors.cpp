class Solution {
public:
    void swap(vector<int>& nums, int firstIndex, int secondIndex) {
        int temp = nums[firstIndex];
        nums[firstIndex] = nums[secondIndex];
        nums[secondIndex] = temp;
    }

    int pivot(vector<int>& nums, int pivotIndex, int lastIndex) {
        int swapIndex = pivotIndex;
        for (int i = pivotIndex + 1; i <= lastIndex; i++) {
            if (nums[i] < nums[pivotIndex]) {
                swapIndex++;
                swap(nums, swapIndex, i);
            }
        }

        swap(nums, pivotIndex, swapIndex);
        return swapIndex;
    }

    void quickSort(vector<int>& nums, int firstIndex, int lastIndex) {
        if (firstIndex >= lastIndex)
            return;

        int pivotIndex = pivot(nums, firstIndex, lastIndex);
        quickSort(nums, firstIndex, pivotIndex - 1);
        quickSort(nums, pivotIndex + 1, lastIndex);
    }

    void sortColors(vector<int>& nums) {
        int firstIndex = 0;
        int lastIndex = nums.size() - 1;

        quickSort(nums, firstIndex, lastIndex);
    }
};
