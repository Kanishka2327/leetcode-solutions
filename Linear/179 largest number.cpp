class Solution {
public:
    static bool compare(string a, string b) {
        return a + b > b + a;
    }

    string largestNumber(vector<int>& nums) {
        vector<string> strNums;

        // Step 1: Convert all numbers to strings
        for (int num : nums) {
            strNums.push_back(to_string(num));
        }

        // Step 2: Sort using custom comparator
        sort(strNums.begin(), strNums.end(), compare);

        // Step 3: Handle case like [0, 0] → return "0" not "000"
        if (strNums[0] == "0") return "0";

        // Step 4: Concatenate all to get result
        string result = "";
        for (string s : strNums) {
            result += s;
        }

        return result;
    }
};
