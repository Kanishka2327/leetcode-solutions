class Solution {
public:
    bool isValid(char ch){
        if(ch >= 'A' && ch<= 'Z' || ch >= 'a' && ch <= 'z')
            return true;
        // if()
        //     return true;
        return false;
    }
    string reverseOnlyLetters(string s) {
        if(s.length() <= 1)
            return s;
        int i=0;
        int j=s.length()-1;
        while(i<j){

            if(!isValid(s[i])){
                i++;
            }
            else if(!isValid(s[j])){
                j--;
            }
            else{
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};