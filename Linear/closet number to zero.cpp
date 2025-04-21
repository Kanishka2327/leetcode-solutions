class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int min = abs(nums[0]);
        int val = nums[0];
        for (int i : nums) {
            if(abs(i) < min || i == val ) {
                min = abs(i);
                val = i;
            }
            else if(abs(i) == min) {
                if(i > val || val == i) {
                    val = i;
                }
            }
        }
        return val;
    }
};