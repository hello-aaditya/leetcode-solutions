class Solution {
public:
    int lengthOfLastWord(string s) {
        stack<string> st;
        int i=0, n = s.length();
        string temp = "";
        while(i<n)
        {
            if(s[i] != ' ')
            {
                temp+=s[i];
            }
            
            else if(s[i] == ' ' && temp != "")
            {
                st.push(temp);
                temp = "";
            }
            i++;
        }
        if(temp != "")
        {
            st.push(temp);
        }

        return st.top().length();
    }
};