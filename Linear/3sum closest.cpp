class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        int left,right;
        int c_sum=INT_MAX/2;
        sort(nums.begin(),nums.end());
        int n=nums.size();

        for(int i=0;i<n-2;i++)
        {
            left=i+1;
            right=n-1;
            while(left<right)
            {
                int sum=(nums[i]+nums[left]+nums[right]);
                if(abs(sum-target)<abs(c_sum-target))
                    c_sum=sum;
                if(sum>target)
                    right--;
                else if(sum<target)
                    left++;
                else 
                    return sum;
            }
        }

        return c_sum;
    }
};