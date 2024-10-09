class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        vector<int> vec(n+1, 0);

        for(int i=0; i<n; i++)
        {
            if(citations[i] > n)
            {
                vec[n]++;
            }
            else
            {
                vec[citations[i]]++;
            }
        }

        int count = 0;
        for(int i=n; i>=0; i--)
        {
            
            count += vec[i];
            if(count >= i)
            {
                return i;
            }
        }
        return -1;
    }
};