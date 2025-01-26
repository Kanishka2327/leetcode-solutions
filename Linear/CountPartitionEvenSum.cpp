class Solution {
    public int countPartitions(int[] nums) {
        int n = nums.length;
        int totalsum =0;
        for(int num : nums){
            totalsum += num;
        }
        int count =0;
        int leftsum =0;

        for(int i=0; i <n-1;i++){
            leftsum += nums[i];
            int rightsum = totalsum - leftsum;

            if((leftsum -rightsum) % 2 ==0){
                count++;
            }
        }
        return count;
    }
}