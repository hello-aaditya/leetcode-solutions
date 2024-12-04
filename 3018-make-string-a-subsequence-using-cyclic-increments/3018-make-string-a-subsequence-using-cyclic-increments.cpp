class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int sizeOfStr2 = str2.size();
        int sizeOfStr1 = str1.size();

        int i=0, j=0;
        while(i<sizeOfStr1 && j<sizeOfStr2)
        {
            if(str1[i] == str2[j] || str1[i]+1 == str2[j] || str1[i]-25 == str2[j])
            {
                j++;
            }
            i++;
        }

        return j==sizeOfStr2;
        
    }
};