class Solution {
public:
    bool areSentencesSimilar(string s1, string s2) {
        if(s1.size() < s2.size())
        {
            swap(s1, s2);
        }

        vector<string> vec1, vec2;
        stringstream ss1(s1);
        string token1;
        while(ss1 >> token1)
        {
            vec1.push_back(token1);
        }

        stringstream ss2(s2);
        string token2;
        while(ss2 >> token2)
        {
            vec2.push_back(token2);
        }

        

        int i=0, j=vec1.size()-1;
        int k=0, l=vec2.size()-1;


        while(i< vec1.size() && k < vec2.size() && vec1[i] == vec2[k])
        {
            i++;
            k++;
        }

        while(k <= l && vec1[j] == vec2[l])
        {
            j--;
            l--;
        }

        return l<k;
    }
};