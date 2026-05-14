class Solution {
    public int search(int[] nums, int target) {
        int start = 0;
        int end = nums.length - 1;
        int answer = bs(start, end, nums, target);
        return answer;
    }
    public static int bs(int start, int end, int[] nums, int target) {
        int mid = start + (end-start)/2;

        // BASE CONDITION
        if (start > end) {
            return -1;
        }

        if (nums[mid] > target) {
            end = mid-1;
            return bs(start, end, nums, target);
        } else if (nums[mid] < target) {
            start = mid+1;
            return bs(start, end, nums, target);
        }
        return mid;
    }
}