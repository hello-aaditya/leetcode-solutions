class Solution {
    public int[] runningSum(int[] nums) {
        int size = nums.length;

        int[] arr = new int[size];
        arr[0] = nums[0];
        for (int i=1; i<size; i++) {
            arr[i] = arr[i-1] + nums[i];
        }
        return arr;
    }
}