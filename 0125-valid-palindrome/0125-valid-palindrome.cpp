class Solution {
public:
    bool isPalindrome(string s) {

        string lowerStr = "";
        for(char c : s)
        {
            if(isalpha(c))
            {
                lowerStr += tolower(c);
            }
            else if(isdigit(c))
            {
                lowerStr += c;
            }
        }

        int n = lowerStr.length();
        int i=0, j=n-1;
        while(i<=j)
        {
            if(lowerStr[i] != lowerStr[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};