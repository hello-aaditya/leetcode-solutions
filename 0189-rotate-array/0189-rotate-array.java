class Solution {
    public void rotate(int[] nums, int k) {
        int size = nums.length;
        // EDGECASE: WHEN k IS GREATER THAN THE LENGTH OF ARRAY 
        if (k > size) {
            k = k % size;
        }

        int start = 0;
        int end = size - 1;

        reverseArray(nums, start, end);
        
        end = k - 1;
        reverseArray(nums, start, end);
        
        start = k;
        end = size - 1;
        reverseArray(nums, start, end);

    }
    public static void reverseArray(int[] nums, int start, int end) {
        int size = nums.length;
        
        while (start < end) {
            int temp = nums[end];
            nums[end] = nums[start];
            nums[start] = temp;

            start++;
            end--;
        }
    }
}