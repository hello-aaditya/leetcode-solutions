class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ptrOnS=0;
        int ptrOnT=0;
        int count = s.length();

        while(ptrOnS<s.length() && ptrOnT<t.length())
        {
            if(s[ptrOnS] == t[ptrOnT])
            {
                count--;
                ptrOnS++;
            }
            ptrOnT++;
        }
        return (count==0);
    }
};