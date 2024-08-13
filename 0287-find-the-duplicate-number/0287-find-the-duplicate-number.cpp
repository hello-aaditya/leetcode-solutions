class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int size = nums.size();
        //edge case
        if(size == 1) return -1;

        unordered_map<int, int> mp;
        for(int i=0; i<size; i++)
        {
            mp[nums[i]]++;
        }

        for(auto& pair : mp)
        {
            if(pair.second > 1)
            {
                return pair.first;
            }
        }
        return -1;
    }
};