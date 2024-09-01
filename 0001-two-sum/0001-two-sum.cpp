class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();

        map<int, int> mp;
        for(int i=0; i<size; i++)
        {
            int remaining = target - nums[i];
            if(mp.count(remaining))
            {
                return {mp[remaining], i};
            }

            mp[nums[i]] = i;
        }
        return {};
    }
};