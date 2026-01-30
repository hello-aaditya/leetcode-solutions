class Solution {
    public List<Integer> findClosestElements(int[] arr, int k, int x) {
        int size = arr.length;
        int start = 0;
        int end = size - 1;

        while (end - start + 1 > k) {
            if (Math.abs(arr[start] - x) > Math.abs(arr[end] - x)) {
                start++;
            } else {
                end--;
            }
        }

        ArrayList<Integer> list = new ArrayList<>();
        for (int i=start; i<=end; i++) {
            list.add(arr[i]);
        }
        return list;
    }
}