class Solution {
public:
    int maxSubarraySumCircular(vector<int>& arr) {
        int totalsum =0; 
        int currmin=0, currmax=0;
        int maxsum= arr[0], minsum =arr[0];
//finding maxsum and minsum , subtract minsum from totalsum to get the circular array sum
        for(int i=0; i<arr.size();i++){
            currmax = max(currmax+arr[i] , arr[i]); 
            maxsum = max(maxsum , currmax); //finding max sum from array

            currmin = min(currmin+arr[i], arr[i]);
            minsum = min(currmin, minsum); // finding min sum from array

            totalsum += arr[i];//computing totalsum with each iteration
        } 
        
        int circularsum = totalsum - minsum;

        if(minsum ==  totalsum){ 
            return maxsum;
        }
        return max(maxsum , circularsum);
    }
};
