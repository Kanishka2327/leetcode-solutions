class Solution {
public:
    bool validPalindrome(string s) {
        int n=s.size();
        int i=0,j=n-1;
        int cnt=0;
        while(i<=j){
            if(s[i]==s[j]){
                i++,j--;
            }else{
                cnt++;
                j--;
            }
        }
        if(cnt<=1) return true;
        i=0,j=n-1,cnt=0;
        while(i<=j){
            if(s[i]==s[j]) i++,j--;
            else {
                cnt++;
                i++;
            }
        }
        if(cnt<=1) return true;
        return false;
    }
};