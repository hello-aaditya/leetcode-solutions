// USING RECURSION

class Solution {
    public int search(int[] nums, int target) {
        int size = nums.length;
        int answer = bs(nums, target, 0, size-1);

        return answer;
    }

    public static int bs(int[] arr, int target, int start, int end) {
        // BASE CONDITION
        if (start > end) {
            return -1;
        }

        int mid = start+(end-start)/2;
        if (arr[mid] > target) {
            return bs(arr, target, start, mid-1);
        } else if (arr[mid] < target) {
            return bs(arr, target, mid+1, end);
        }
        return mid;
    }
}