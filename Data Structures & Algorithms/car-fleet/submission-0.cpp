class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
        //Step-01:  Make pair of position and speed
        vector<pair<int,int>> pair;
        for(int i=0; i<position.size(); i++)
        {
            pair.push_back({position[i], speed[i]});
        }
        // Step-02: Sort Them based on position
        sort(pair.rbegin(),pair.rend());
        // Step-03: Put needed time
          vector<double> stack;
          for(auto &p: pair)
          {
            stack.push_back((double)(target-p.first)/p.second);
            if(stack.size()>=2 && stack.back()<=stack[stack.size()-2])
            {
                stack.pop_back();
            }
          }
          return stack.size();
    
    }
};
