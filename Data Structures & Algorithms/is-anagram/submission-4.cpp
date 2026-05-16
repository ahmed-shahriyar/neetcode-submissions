class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> sv(26,0);
        vector<int> tv(26,0);
        for(char &x:s)
        {
            sv[x-'a']++;
        }
        for(char &x:t)
        {
            tv[x-'a']++;
        }
        bool ans =true;
        for(int i=0; i<26;i++)
        {
            if(sv[i]!=tv[i])
            {
                ans = false;
                break;
            }
        }
        return ans;
    }
};
