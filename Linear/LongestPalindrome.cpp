class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.size();
        unordered_map<char, int> mp;

        for(char &ch :s) //insert every character in map
        {
            mp[ch]++;
        }
        int res =0;
        bool oddfreq = false;
        for(auto& it:mp){ //traverse in map
            if(it.second % 2 ==0){ //count is even , add to res 
                res+= it.second;
            }else{
                res += it.second-1; //its odd ,dec from res
                oddfreq = true;
            } 
        }if(oddfreq){  //add 1 to res as its the middle of palindrome
            res++;
        }
        return res;
    }
};