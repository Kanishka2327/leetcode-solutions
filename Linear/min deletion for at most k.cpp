class Solution {
public:
    int minDeletion(string s, int k) {
        unordered_map<char, int> freq;

        // Count frequency of each character
        for (char c : s) {
            freq[c]++;
        }
        // If number of distinct characters is already <= k, no deletion needed
        if (freq.size() <= k) {
            return 0;
        }

        // Store frequencies in a vector and sort them
        vector<int> counts;
        for (auto& entry : freq) {
            counts.push_back(entry.second);
        }

        sort(counts.begin(), counts.end());

        int deletions = 0;
        int extra = freq.size() - k;

        // Delete characters with lowest frequencies first
        for (int i = 0; i < extra; ++i) {
            deletions += counts[i];
        }
        return deletions;
    }
};        