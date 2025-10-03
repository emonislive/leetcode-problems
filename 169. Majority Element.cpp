class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int , int> freq;
        int mostFreq = INT_MIN, num = 0;
        
        for (int n : nums){
            freq[n]++;
            
            if(freq[n] > mostFreq) {
                mostFreq = freq[n];
                num = n;
            }
        }
        return num;
    }
};
