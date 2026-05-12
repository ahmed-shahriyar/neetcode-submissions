class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(string s: tokens)
        {
            if(s =="+" || s =="-" || s =="*" || s =="/")
            {
                int second = st.top();
                st.pop();
                int first = st.top();
                st.pop();
                if(s=="+")
                {
                    st.push(first + second);
                }
                else if(s=="-")
                {
                    st.push(first - second);
                }
               else if(s=="*") {
                   st.push((long)first * second); 
                 }
                else 
                {
                    st.push(first / second);
                }

            }
            else
            {
             int temp = stoi(s);
             st.push(temp);

            }
        }
        return st.top();
    }
};
