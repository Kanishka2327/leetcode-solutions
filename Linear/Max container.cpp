class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int max_capa = n* n ;
        int max_possible_weight = max_capa * w;

        if (max_possible_weight <= maxWeight)
            return max_capa;

        return min(max_capa ,maxWeight / w );
    }
};