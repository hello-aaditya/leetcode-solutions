class Solution {
public:
    int hammingWeight(int n) {
        int setBits = 0;
        while(n)
        {
            int mod = n%2;
            if(mod)
            {
                setBits++;
            }
            n = n/2;
        }
        return setBits;
    }
};