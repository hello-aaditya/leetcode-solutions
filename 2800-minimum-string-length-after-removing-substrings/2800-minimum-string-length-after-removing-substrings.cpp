class Solution {
public:
    int minLength(string s) {
        // approach-1: TC= O(n^2)
        /*
        int n = s.length();
        int prev=0, curr=1;
        while(curr<n)
        {
            if( (s[prev] == 'A' && s[curr] == 'B') || (s[prev] == 'C' && s[curr] == 'D') )
            {
                if(prev != 0)
                {
                    s.erase(s.begin()+prev, s.begin()+curr+1);
                    curr = prev;
                    prev--;
                }
                else
                {
                    s.erase(s.begin()+prev, s.begin()+curr+1);
                }
            }
            else
            {
                prev++;
                curr++;
            }
            n = s.length();
        }
        n = s.length();
        return n;
        */

        //approach-2:
        int n = s.length();
        vector<char> vec;

        for(char c : s)
        {
            if(!vec.empty())
            {
                if( ( vec.back() == 'A' && c == 'B') || (vec.back() == 'C' && c == 'D') )
                {
                    vec.pop_back();
                }
                else
                {
                    vec.push_back(c);
                }
            }
            else
            {
                vec.push_back(c);
            }

        }
        return vec.size();
    }
};