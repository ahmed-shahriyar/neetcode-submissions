class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

     //      1,2,4,6
    // Pref =1,1,2,8
   //  Suf = 1,24,6,1
   int n = nums.size();
   vector<int> pref(n);
   vector<int> suf(n);
   vector<int> res(n);
     pref[0] =1;
     suf[n-1] =1;
      // Prefix Multi
      for(int i=1; i<n; i++)
      {
        pref[i]= pref[i-1]*nums[i-1];
      }
      for(int i=n-2; i>=0; i--)
      {
        suf[i] =suf[i+1]* nums[i+1];
      }
      for(int i=0; i<n; i++)
      {
        res[i] = pref[i]*suf[i];
      }
      return res;
     

    }
};
