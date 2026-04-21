class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) {
        int size = nums.length;

        int[] smaller = new int[size];
        for (int i=0; i<size; i++) {
            int current = nums[i];

            int counter = 0;
            for (int j=0; j<size; j++) {
                if (nums[j] < current && (i!=j)) {
                    counter++;
                }
            }
            smaller[i] = counter;
        }
        return smaller;
    }
}