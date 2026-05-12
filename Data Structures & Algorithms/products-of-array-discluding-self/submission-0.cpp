class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int mul_1=1;
        int mul_2 =1;
        int count_Zero=0;
        for(int &n: nums)
        {
            mul_1*=n;
            if(n!=0)
            {
                mul_2*=n;
            }
            else
             count_Zero++;
        }
        vector<int>res;
        for(int i=0; i<nums.size(); i++)
        {
            if(count_Zero>1)
            {
                res.push_back(0);
            }
            else
            {
                if(nums[i]!=0)
                {
                    res.push_back(mul_1/nums[i]);
                }
                else
                {
                    res.push_back(mul_2);
                }
            }
        }
        return res;

    }
};
