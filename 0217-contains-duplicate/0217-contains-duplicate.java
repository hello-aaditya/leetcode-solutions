class Solution {
    public boolean containsDuplicate(int[] nums) {
        int size = nums.length;

        Set<Integer> set = new HashSet<>();
        for (int i=0; i<size; i++) {
            int current = nums[i];
            if (set.contains(current)) {
                return true;
            }
            set.add(current);
        }

        return false;
    }
}