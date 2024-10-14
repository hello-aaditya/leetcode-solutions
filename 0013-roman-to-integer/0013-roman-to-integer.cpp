class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> symbols = 
        {
            {'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}
        };
        int n = s.size();
        int ans = symbols[s[n-1]];
        for(int i=n-2; i>=0; i--)
        {
            if(symbols[s[i]] >= symbols[s[i+1]])
            {
                ans += symbols[s[i]];
            }
            else
            {
                ans -= symbols[s[i]];
            }
        }
        return ans;
    }
};