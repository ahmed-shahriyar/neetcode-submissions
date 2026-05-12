class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i =0;
        int j =heights.size()-1;
        int area=0;
        while(i<j)
        {
          int x = min(heights[i],heights[j])*(j-i);
          area = max(area,x);
          if(heights[i]<heights[j])
          {
           i++;
          }
          else
          {
            j--;
          }
        }
        return area;
    }
};
