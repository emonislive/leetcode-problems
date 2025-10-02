class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int singleNum = 0;

        for (int num : nums) {
            singleNum ^= num; // 0 xor a = a [uncommon value stays], a xor a = 0 [common gets removed];
        }
        return singleNum;
    }
};
