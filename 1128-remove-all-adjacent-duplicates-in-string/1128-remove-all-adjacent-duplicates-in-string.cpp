class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;

        int n = s.size();
        for(int i=0; i<n;)
        {
            if(st.empty() || st.top() != s[i])
            {
                st.push(s[i]);
                i++;
            }
            else if(st.top() == s[i])
            {
                i++;
                st.pop();
            }
        }

        string revStr = "";
        while(!st.empty())
        {
            revStr += st.top();
            st.pop();
        }

        string str = "";
        int m = revStr.length();
        for(int i = m-1; i>=0; i--)
        {
            str += revStr[i];
        }

        return str;
    }
};