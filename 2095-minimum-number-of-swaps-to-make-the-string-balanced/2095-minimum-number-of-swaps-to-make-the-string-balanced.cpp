class Solution {
public:
    int minSwaps(string s) {
        int n = s.length();
        stack<char> st;
        for(char &ch : s)
        {
            if(st.empty())
            {
                st.push(ch);
            }
            else if(st.top() == '[' && ch == ']')
            {
                st.pop();
            }
            else if(st.top() == '[' && ch == '[')
            {
                st.push(ch);
            }
            else if(st.top() == ']' && ch == '[')
            {
                st.push(ch);
            }
            else if(st.top() == ']' && ch == ']')
            {
                st.push(ch);
            }
        }

        while(!st.empty() && st.top() == '[')
        {
            st.pop();
        }
        return (st.size()+1)/2;
    }
};