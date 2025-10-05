class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int leftMax = height[0];
        int rightMax = height[n - 1];
        int sum = 0;
        for (int i = 0, j = n - 1; i != j;) {
            leftMax = max(leftMax, height[i]);
            rightMax = max(rightMax, height[j]);

            if (leftMax == rightMax || leftMax < rightMax) {
                if ((leftMax - height[i]) > 0) {
                    sum += (leftMax - height[i]);
                }
                i++;
            } else {
                if ((rightMax - height[j]) > 0) {
                    sum += (rightMax - height[j]);
                }
                j--;
            }
        }
        return sum;
    }
};
