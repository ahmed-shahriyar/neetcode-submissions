class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        for(const int &n: nums)
        {
            s.insert(n);
        }
        int mx=0; 
        int count =0;
        int prev = *s.begin();
        for(auto &x : s)
        { 
           if(prev+1==x)
           {
            count++;
           }
           else
           {
            count =1;
           }
           prev =x;
           mx = max(count,mx);
           

        }
        return mx;
        
    }
};
