class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int>Hash( nums.size()+1, 0);

        for(int i=0; i<nums.size();i++){
            Hash[nums[i]]++;
        }
        for(int i =0;i<=nums.size();i++){
            if (Hash[i] == 0) {
            return i;
        }
        }
        return 1;
    }
};