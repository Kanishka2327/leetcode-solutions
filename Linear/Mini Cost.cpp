class Solution {
public:

vector<int> minCosts(vector<int>& cost) {
    int n = cost.size();
    vector<int> answer(n);

    // Start from the last position and move backward
    answer[0] = cost[0]; // First position must be directly swapped
    for (int i = 1; i < n; i++) {
        answer[i] = min(cost[i], answer[i - 1]); // Take the minimum cost to reach this position
    }

    return answer;
}
};