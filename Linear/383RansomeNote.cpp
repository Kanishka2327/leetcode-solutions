class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char , int> map;

        for(char c: magazine){ //make hashmap og magazine chars with frequency
            map[c]++;
        }
        for(char c : ransomNote){ //iterate in ransomNote
            if(map[c] >0){  //if present in map then count dec
                map[c]--;
            } 
            else return false; //if not then return false 
        }
        return true;
    }
};