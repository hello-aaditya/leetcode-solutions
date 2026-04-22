class Solution {
    public int[] twoSum(int[] nums, int target) {
        int size = nums.length;

        Map<Integer, Integer> map = new HashMap<>();
        for (int i=0; i<size; i++) {
            int operand1 = nums[i];

            int operand2 = target - operand1;
            if (map.containsKey(operand2)) {
                return new int[]{i, map.get(operand2)};
            }
            map.put(operand1, i);
        }

        return new int[]{};
    }
}