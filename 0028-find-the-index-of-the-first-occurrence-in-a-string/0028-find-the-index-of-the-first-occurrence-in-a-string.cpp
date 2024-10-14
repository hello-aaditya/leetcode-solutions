class Solution {
public:
    int strStr(string haystack, string needle) {
        int size1 = haystack.size();
        int size2 = needle.size();
        int i = 0, j = 0;
        while(i<size1 && j<size2)
        {
            if(haystack[i+j] == needle[j])
            {
                if(j == size2-1)
                {
                  return i;
                }
                j++;
            }
            else
            {
                i++;
                j=0;
            }
        }
        return -1;
    }
};