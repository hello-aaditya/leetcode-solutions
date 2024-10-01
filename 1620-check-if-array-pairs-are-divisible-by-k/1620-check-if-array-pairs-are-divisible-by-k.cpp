class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        int n = arr.size();

        //remainder vector of size k(0 to k-1) containing 0 initially in each index
        vector<int> rem(k, 0);

        for(int i=0; i<n; i++)
        {
            int element = ((arr[i] % k) + k) % k;
            rem[element]++;
        }

        //edge-case
        if( (rem[0] % 2) != 0) return false;

        //non-edge-case
        for(int i=1; i<=k/2; i++)
        {
            int target = k - i;
            if(rem[i] != rem[target])
            {
                return false;
            }
            else
            {
                rem[i]--;
                rem[target]--;
            }
        }
        return true;
    }
};