class Solution {
public:
  int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int gptr = 0, sptr = 0;

    while (gptr < g.size() && sptr < s.size()){
      if(g[gptr] <= s[sptr]){
        sptr++;
        gptr++;
      } 
      else {
        sptr++;
      }
    }

    return gptr;
  }
};