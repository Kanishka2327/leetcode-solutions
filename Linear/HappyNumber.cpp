class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.size()==1) return nums[0];
        for(int i =0; i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                i =i+1;
            }
             else return nums[i];
        }
return nums[nums.size() - 1];    }
};