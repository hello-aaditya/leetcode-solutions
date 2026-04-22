class Solution {
    public boolean containsDuplicate(int[] nums) {
        int size = nums.length;

        Map<Integer, Integer> map = new HashMap<>();
        for (int i=0; i<size; i++) {
            int current = nums[i];
            if(map.containsKey(current)) {
                return true;
            }
            map.put(current, map.getOrDefault(current, 0) + 1);
        }
        return false;
    }
}