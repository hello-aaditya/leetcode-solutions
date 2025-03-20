class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int size = nums.size();
        if(size==1) return nums[0];

        int answer = 0;
        for(int i=0; i<size; i++)
        {
            answer^=nums[i];
        }
        return answer;
    }
};