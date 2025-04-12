class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> map;
        int maxfreq = INT_MIN;
        for(int i=0 ; i<nums.size();i++){
             map[nums[i]]++;
             if(maxfreq <map[nums[i]]){
                maxfreq =map[nums[i]];
             }
        }
        int result =0;
        for(auto i : map){
            if(i.second == maxfreq){
                result += maxfreq;
            }
        }
        return result;
    }
};