class Solution {
    public int[] maxSlidingWindow(int[] nums, int k) {
        int size = nums.length;

        int start = 0, end = 0;
        int[] maxArr = new int[size-k+1];
        int idx = 0;
        Deque<Integer> dq = new ArrayDeque<>();

        while (end < size) {
            int windowSize = end-start+1;
            int current = nums[end];

            while ((!dq.isEmpty()) && (current > dq.peekLast())) {
                dq.pollLast();
            }

            dq.offerLast(current);

            if (windowSize < k) {
                end++;
            }
            else if (windowSize == k) {
                maxArr[idx++] = dq.peekFirst();
                
                if (nums[start] == dq.peekFirst()) {
                    dq.pollFirst();
                }
                start++;
                end++;
            }
        }
        return maxArr;
    }
}