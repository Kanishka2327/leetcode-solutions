class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.size() >2){
            string news;
            for(int i=0; i <s.size()-1;i++){
                int newdigit = (s[i]-'0' +  s[i+1]-'0') % 10;
                news += (newdigit + '0');
        }
           s = news;     
    }
           
        return s[0] == s[1];
    }
};