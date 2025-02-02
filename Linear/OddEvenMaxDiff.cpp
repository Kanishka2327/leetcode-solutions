class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> freq;

        for(char c : s){
            freq[c]++;
        }
        int maxodd = -1, mineven =INT_MAX;
        for(auto [ch, count] : freq){
            if(count % 2 ==1){ //single
                maxodd= max(maxodd, count);
            }
            else{
                mineven = min(mineven, count);
            }
        }
        //NO VALID
        if(maxodd == -1|| mineven == INT_MAX){
            return 0;
        }
        return maxodd-mineven;
    }
};