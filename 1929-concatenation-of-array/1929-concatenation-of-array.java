class Solution {
    public int[] getConcatenation(int[] nums) {
        int size = nums.length;

        int arr[] = new int[size*2];
        for (int i=0; i<size*2; i++) {
            arr[i] = nums[i%size];
        }
        return arr;
    }
}