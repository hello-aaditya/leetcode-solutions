class Solution {
public:
    int minLength(string s) {
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
    }
};