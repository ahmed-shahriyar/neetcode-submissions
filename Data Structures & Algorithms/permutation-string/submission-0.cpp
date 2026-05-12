class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l=0;
        int r =s1.length()-1;
        int len =s1.length();
        sort(s1.begin(),s1.end());
    while(r<s2.length())
    {
        string sub =s2.substr(l,len);
        sort(sub.begin(),sub.end());
       if(s1== sub) return true;
       l++;
       r++;
    }
    return false;

        
    }
};
