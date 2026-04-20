class Solution {
    public int[] shuffle(int[] nums, int n) {
        int size = n*2;
        int[] arr = new int[size];

        for (int i=0; i<size; i++) {
            int counter = n;
            // EVEN INDEX STORES 0, 1, 2 TILL n
            if ((i&1) == 0) {
                arr[i] = nums[i/2];
            }
            // ODD INDEX STORES n, (n+1), (n+2) TILL n*2
            else {
                arr[i] = nums[n++];
            }
        }
        return arr;
    }
}