class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int, int> freq;
        string s = to_string(n);
        int sum = 0;
        
        while (true) {
            for (int i = 0; i < s.size(); i++) {
                int num = s[i] - '0';
                num *= num;
                sum += num;
            }
            if (sum == 1)
                return true;

            if (freq[sum] == 0)
                freq[sum]++;
            else
                return false;

            s = to_string(sum);
            sum = 0;
        }
        return false;
    }
};
