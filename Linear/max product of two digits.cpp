class Solution {
public:
    int maxProduct(int n) {
        vector<int> digit;

        while(n >0){
            digit.push_back(n%10);
            n /= 10;
        }
        int max_prod =0;
        for(int i =0 ; i < digit.size();i++){
            for(int j =i+1; j<digit.size();j++){
                int product = digit[i] *digit[j];
                max_prod = max(max_prod ,product );
            }
        }
        return max_prod;
    }
};