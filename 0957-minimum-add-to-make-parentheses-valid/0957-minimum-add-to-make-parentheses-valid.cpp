class Solution {
public:
    int minAddToMakeValid(string s) {
        int n= s.size();

        //create a stack to store that single element of paranthesis that has no match.
        stack<char> st;

        for(int i=0; i<n; i++)
        {
            //push the element when stack 'st' is empty
            if(st.empty())
            {
                st.push(s[i]);
            }
            //when st is not empty
            else if(!st.empty())
            {
                /* 
                => list of the conditions: 
                    st.top()        s[i]        operation
                1.    '('            ')'         st.pop()
                2.    '('            '('        st.push(s[i])
                3.    ')'            ')'        st.push(s[i])
                4.    ')'            '('        st.push(s[i])

                */
                if(st.top() == '(' && s[i] == ')')
                {
                    st.pop();
                }
                else
                {
                    st.push(s[i]);
                }
            }
        }
        return st.size();
    }
};