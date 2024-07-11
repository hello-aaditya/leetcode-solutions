class Solution {
public:
    string reverseParentheses(string s) {
        string result = "";
        stack<int> lastSkipLength;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == '(')
            {
                lastSkipLength.push(result.length());
            }
            else if(s[i] >= 'a' && s[i] <= 'z')
            {
                result += s[i];
            }
            else if(s[i] == ')')
            {
                reverse(result.begin()+lastSkipLength.top(), result.end());
                lastSkipLength.pop();
            }
        }
        return result;
    }
};