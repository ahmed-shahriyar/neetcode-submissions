class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string;
        // [Hello] World
        //-> 5#Hello5#World
        for(const string &s: strs)
        {
            int length = s.length(); // 5
            encoded_string += to_string(length)+"#"+s;
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        
        // i=0; j=1
         vector<string> res;
        int i =0;
        while(i<s.size())
        {
            int j=i;
            while(s[j]!='#')
            {
                j++;
            }
            //5#Hello5#World
            int length =stoi(s.substr(i,j-i)); //5
            i =j+1;
            j= i+length;
          res.push_back(s.substr(i,length));
          i=j;

        }
      return res;
    }
};
