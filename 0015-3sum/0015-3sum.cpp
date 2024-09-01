class Solution {
public:
    vector<vector<int>> result;
    void twoSum(vector<int>& nums, int target, int i, int j)
    {
        while(i < j)
        {
            if(nums[i] + nums[j] < target)
            {
                i++;
            }
            else if(nums[i] + nums[j] > target)
            {
                j--;
            }
            else
            {
                while(i < j && nums[i] == nums[i+1])
                {
                    i++;
                }
                while(i < j && nums[j] == nums[j-1])
                {
                    j--;
                }

                result.push_back({-target, nums[i], nums[j]});
                i++;
                j--;
            }
        }
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        int size = nums.size();

        if(size < 3) return {};

        result.clear();

        sort(nums.begin(), nums.end());

        for(int i=0; i<size; i++)
        {
            if(i > 0 && nums[i] == nums[i-1])
            {
                continue;
            }

            int n1 = nums[i];
            int target = -n1;
            twoSum(nums, target, i+1, size-1);
            
        }

        return result;
    }
};