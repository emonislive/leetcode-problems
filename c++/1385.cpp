class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int max = 0, c = 0, ans = 0, len1, len2;
        len1 = arr1.size(); len2 = arr2.size();
        for (int i = 0; i < len1; i++){
            for (int j = 0; j < len2; j++){
                int diff = abs(arr1[i]-arr2[j]);
                if (diff > d)
                    c++;
            }
            // checking if every elements are bigger than d, if so then we will get tha same number of counts as the length of arr2.
            if (c == len2)
                ans++;
            c = 0;
        }
        return ans;
    }
};
