class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_set<char> cs;
       int l =0; 
       int res= 0;
       for(int r=0; r<s.size();r++)
       {
         while(cs.find(s[r])!=cs.end())
         {
            cs.erase(s[l]);
            l++;
         }
         cs.insert(s[r]);
         res =max(res,r-l+1);
       }
       return res;
    }
};
