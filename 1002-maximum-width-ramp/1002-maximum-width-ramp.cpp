class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        /* Approach-1
        //Brute force approach
        //Time complexity- O(n^2)
        int n = nums.size();
        int maxi = 0;
        int ramp = 0;

        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(nums[i] <= nums[j])
                {
                    ramp = max(ramp, j-i);
                }
            }
        }
        return ramp;
        */

        /* Approach-2
        //Better Brute force approach
        //Time complexity- O(n^2)
        int n = nums.size();
        int maxi = 0;
        int ramp = 0;

        for(int i=0; i<n; i++)
        {
            for(int j=n-1; j>i; j--)
            {
                if(nums[i] <= nums[j])
                {
                    ramp = max(ramp, j-i);
                }
            }
        }
        return ramp;
        */

        //Approach-3
        //Optimal Case
        // Time Complexity- O(n)
        //space complexity- O(n)

        int n = nums.size();

        vector<int> maxToRight(n);
        maxToRight[n-1] = nums[n-1];
        for(int i=n-2; i>=0; i--)
        {
            maxToRight[i] = max(maxToRight[i+1], nums[i]);
        }

        int i=0;
        int j=0;
        int ramp=0;
        while(j<n)
        {
            while(i<j && nums[i] > maxToRight[j])
            {
                i++;
            }
            ramp = max(ramp, j-i);
            j++;
        }
        return ramp;
    
    }
};