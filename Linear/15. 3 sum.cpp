class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end()); //sort whole array

        for(int i =0; i < n;i++){
            if(i>0 && nums[i] == nums[i-1]) continue; //skip duplicate i 
            int j =i+1, k =n-1; //defining j(leftside) and k(rightmost) 
            while(j<k){ 
                int sum = nums[i] +nums[j]+ nums[k];
                if(sum <0){
                    j++;
                }else if(sum > 0){
                    k--;
                }else{
                    ans.push_back({nums[i], nums[j], nums[k]}); //store triplet in ans vector
                    j++; k--;
                    while(j < k && nums[j] == nums[j-1]) j++; // inc j when j occurs in duplicate
                }
            }
        }
        return ans;
    }
};
