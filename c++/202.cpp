class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> cycleDetect;
        while (true) {
            /*
            Q.  cycleDetect.find(n) != cycleDetect.end():

            *  cycleDetect.find(n): This attempts to find the number n in the set cycleDetect. 
            *  cycleDetect.end(): This represents the end iterator of the set, which is not a valid element but rather a marker for the end of the set.
            *  Detecting Cycles: If n is found in the set, cycleDetect.find(n) will return an iterator pointing to the location of n in the set. If n is not found in the set, cycleDetect.find(n) will return cycleDetect.end(). 
            *  Condition cycleDetect.find(n) != cycleDetect.end(): If this condition is true, it means n is already in the set. This implies that the process has encountered n before, indicating a cycle. 
            
            */
            if (cycleDetect.find(n) != cycleDetect.end())
                return false;

            cycleDetect.insert(n); // Inserting value to the set

            string numToString = to_string(n);
            long long int sum = 0;

            for (int i = 0; i < numToString.length(); i++) {
                int digit = numToString[i] - '0';
                sum = sum + (digit * digit);
            }
            if (sum == 1)
                return true;
            n = sum;
        }
    }
};
