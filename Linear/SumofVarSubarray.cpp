class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int totalsum =0; 
        int n = nums.size();

        for(int i =0;i<n;i++){
            int start = max(0, i - nums[i]);
            for(int j = start ;j<=i;j++){
                totalsum += nums[j];
            }
        }
        return totalsum;
    }
};