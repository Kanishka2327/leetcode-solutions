class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        // Step 1: Sort the array
    sort(nums.begin(), nums.end());

    // Step 2: Calculate the maximum product
    int n = nums.size();
    
    // Option 1: Product of the three largest numbers
    int product1 = nums[n-1] * nums[n-2] * nums[n-3];

    // Option 2: Product of the two smallest numbers and the largest number
    int product2 = nums[0] * nums[1] * nums[n-1];

    // Step 3: Return the maximum of the two products
    return max(product1, product2);
    }
};