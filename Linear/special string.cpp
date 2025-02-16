class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        int n = s.length();
        if (k > n) return false;

        for (int i = 0; i <= n - k; i++) {
            if (count(s.begin() + i, s.begin() + i + k, s[i]) == k) { // Check if substring has only one distinct character
                if ((i == 0 || s[i - 1] != s[i]) && (i + k == n || s[i + k] != s[i])) { // Check boundary conditions
                    return true;
                }
            }
        }
        return false;
    }
};