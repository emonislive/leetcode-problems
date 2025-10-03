class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = INT_MIN, temp = 0;
        int checkNegative = 0, sumNeg = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            checkNegative = temp + nums[i];
            
            if (nums[i] < 0 && nums[i] > sumNeg) { // handle negative numbers [stores the biggest negative number] 
                sumNeg = nums[i];
            }

            if (checkNegative < 0) { // handle negative numbers within positive numbers;
                temp = 0;
                continue;
            }

            temp += nums[i]; // add the sum of the positive numbers;
            if (temp > sum)
                sum = temp;
        }
        if (sum == INT_MIN)
            return sumNeg;

        return sum;
    }
};
