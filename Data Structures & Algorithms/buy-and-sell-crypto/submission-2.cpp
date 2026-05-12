class Solution {
public:
    int maxProfit(vector<int>& prices) {
    
    int sum =0; // Profit Calculator
    int l =0; // Indicate Buying Day
    int r = 1; // Indicate selling day
    while(r<prices.size())
    {
        // Selling > buying
        if(prices[r]> prices[l])
        {
            sum = max(sum, prices[r]- prices[l]);
        }
        // Buying > selling
        else
        {
            l =r;
        }
        r++;
    }
        return sum;
    }
};
//10,1,5,6,7,1 

/* 
  l --> Buying
  r --> Selling
  l =10 , r=1  -->0
  l =1  , r= 5 -->4
  l =1  , r =6 -->5
  l=1   , r =7 --> 6
  l=1   , r =1 --> 0


7,1,5,3,6,4



*/


//  1 --> 7 =6