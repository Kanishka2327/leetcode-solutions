class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt = 0;
        int i = 0;
        int j = 1;

        while(j<nums.size()){
            if(nums[j]-nums[i] == 1){
                cnt  = max(cnt,j-i+1);
                j++;
            }
            else if(nums[j]-nums[i] > 1){
               
                i++;
            }
            else{

            j++;
            }
        }
        return cnt;
    }
};