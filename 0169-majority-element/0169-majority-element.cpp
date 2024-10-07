class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++)
        {
            mp[nums[i]]++;
        }

        int maxi = INT_MIN;
        int index = -1;
        for(const auto &pair : mp)
        {
            if(maxi <= pair.second)
            {
                maxi = pair.second;
                index = pair.first;
            }
        }
        return index;
    }
};