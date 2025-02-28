class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int c=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[0] && c==0)
                c=nums[i];
            else if(nums[i]!=c)
                return c;

        }

        return -1;
    }
};