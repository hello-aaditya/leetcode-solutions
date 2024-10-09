class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> product(n, 1);

        for(int i=1; i<n; i++)
        {
            product[i] = nums[i-1] * product[i-1];
        }

        int suffix = 1;
        for(int i=n-2; i>=0; i--)
        {
            suffix =suffix * nums[i+1];
            product[i] = product[i] * suffix;
        }

        return product;
    }
};