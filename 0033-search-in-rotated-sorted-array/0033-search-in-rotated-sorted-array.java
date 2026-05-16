// SOLVE USING RECURSION

class Solution {
    public int search(int[] nums, int target) {

        return searchFn(nums, target, 0, nums.length-1);
    }

    public static int searchFn(int[] arr, int target, int start, int end) {
        // BASE CONDITION
        if (start > end) {
            return -1;
        }

        int mid = start + (end-start)/2;

        // ELEMENT FOUND AT MID
        if (arr[mid] == target) {
            return mid;
        }

        // IF SEARCH SPACE FROM arr[start] TO arr[mid] IS SORTED
        if (arr[start] <= arr[mid]) {
            
            // CASE-1: arr[start] <= target >= arr[mid]
            if ((target >= arr[start]) && (target <= arr[mid])) {
                end = mid-1;
                return searchFn(arr, target, start, end);
            }
            // CASE-2: arr[mid+1] <= target >= arr[end]
            else {
                start = mid+1;
                return searchFn(arr, target, start, end);
            }
        }
        // IF SEARCH SPACE FROM arr[start] TO arr[mid] IS NOT SORTED
        // THEN SEARCH SPACE WILL BE: 
        // CASE-1: arr[start] <= target >= arr[mid]
        if ((target >= arr[mid]) && (target <= arr[end])) {
            start = mid+1;
            return searchFn(arr, target, start, end);
        } 
        // CASE-2: arr[mid+1] <= target >= arr[end]
        else {
            end = mid-1;
            return searchFn(arr, target, start, end);
        }
    }
}