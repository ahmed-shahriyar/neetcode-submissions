class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int res =0;
      unordered_set<char> c;
      int l =0;
      for(int r=0; r<s.length(); r++)
      {
         while(c.find(s[r])!=c.end())
         {
            c.erase(s[l]);
            l++;
         }
         c.insert(s[r]);
         res = max(res, r-l+1);
      }
       return  res;
    }
};
/*
  l =0, r =1
  abcabcbb
  l =a  r=b [a, b] =2
  l = a r =c  [a,b,c]  =3
  l = a, r =a  [b,c,a] =3
  


*/