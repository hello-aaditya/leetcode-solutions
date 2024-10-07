class Solution {
public:
    void reverse(vector<int>& nums, int i, int j)
    {
        while(i<=j)
        {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++; j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        //the condition where k is greater than size of the vector length:
        while(k>n)
        {
            k = k-n;
        }

        int i = 0, j = n-1;
        reverse(nums, i, j);

        reverse(nums, 0, k-1);

        reverse(nums, k, n-1);
    }
};