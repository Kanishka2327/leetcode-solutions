class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        int n = nums.size();
        //building a hash table
        for(int i =0; i<n ;i++){
            numMap[nums[i]] = i;
        }
        for(int i=0; i<n; i++){
            int keys = target - nums[i];
            if(numMap.count(keys) && numMap[keys] != i){
                return {i, numMap[keys]};
            }
                    
        }
        return {};
    }
};