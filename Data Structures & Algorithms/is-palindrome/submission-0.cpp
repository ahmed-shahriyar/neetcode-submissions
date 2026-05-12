class Solution {
public:
    bool isPalindrome(string s) {
        string s1="";
        for(unsigned char c:s)
        {
            if(isalnum(c))
            {
               s1+=tolower(c);
            }
        }
        string s2=s1;
        reverse(s2.begin(),s2.end());
        return s1==s2;
     
        
    }
};
