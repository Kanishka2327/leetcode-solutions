class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buystock= prices[0];
        int maxi =0;
        for(int i=0; i<prices.size();i++){
            if(prices[i]< buystock){
                buystock = prices[i];
            }
            maxi = max(prices[i]- buystock , maxi);

        }
        return maxi;
    }
};