class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //TC: O(n)
        //SC: O(1)
        int n = prices.size();
        int maxProfit = 0;
        int currMin =INT_MAX;
        for(int i=0; i<n; i++)
        {
            currMin = min(currMin, prices[i]);
            maxProfit = max(maxProfit, prices[i]-currMin);
        }
        return maxProfit;
    }
};