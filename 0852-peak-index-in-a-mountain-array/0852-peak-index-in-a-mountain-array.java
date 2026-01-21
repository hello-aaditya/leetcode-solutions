class Solution {
    public int peakIndexInMountainArray(int[] arr) {
        int start = 0;
        int end = arr.length-1;

        int peak = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if ( (mid+1 != arr.length) && (arr[mid] >= arr[mid+1]) ) {
                peak = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return peak;
    }
}