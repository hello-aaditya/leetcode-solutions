class Solution {
public:
    long long minimumSteps(string s) {
        int n = s.size();
        long long count = 0;
        int black = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i] == '1')
            {
                black++;
            }
            else if(s[i] == '0')
            {
                count = count + black;
            }
        }
        return count;
    }
};