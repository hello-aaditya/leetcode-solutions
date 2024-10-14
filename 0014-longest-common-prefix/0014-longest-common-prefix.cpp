class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(begin(strs), end(strs));
        string firstWord = strs[0];
        string lastWord = strs[strs.size()-1];
        int i = 0, j = 0;
        string longestCommonPrefix = "";
        while(i<firstWord.size() || j<lastWord.size())
        {
            if(firstWord[i] == lastWord[j])
            {
                longestCommonPrefix += firstWord[i];
            }
            else
            {
                break;
            }
            i++;
            j++;
        }
        return longestCommonPrefix;
    }
};