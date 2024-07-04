class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        string small;
        for(int i=0; i<n; i++)
        {
            if(isalpha(s[i]))
            {
                small += tolower(s[i]);
            }
            else if(isdigit(s[i]))
            {
                small += s[i];
            }
        }
        
        int m = small.length();
        int i=0, j=m-1;
        while(i<j)
        {
            if(small[i] != small[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;

    }
};