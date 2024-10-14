class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        vector<string> word_of_s;
        string word = "";
        for(int i=0; i<n; i++)
        {
            if(s[i] != ' ')
            {
                word += s[i];
            }
            else if(s[i] == ' ' && word != "")
            {
                word_of_s.push_back(word);
                word = "";
            }
        }
        if(word != "")
        {
            word_of_s.push_back(word);
        }
        string rev = "";
        for(int i=word_of_s.size()-1; i>=0; i--)
        {
            rev += word_of_s[i];
            if(i!=0)
            {
                rev += " ";
            }
        }
        return rev;
    }
};