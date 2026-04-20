class Solution {
    public int numIdenticalPairs(int[] nums) {
        int size = nums.length;

        Map<Integer, Integer> map = new HashMap<>();
        int goodPairs = 0;

        for (int i=0; i<size; i++) {
            map.put(nums[i], map.getOrDefault(nums[i], 0) + 1);
        }

        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            // FREQUENCY OF CURRENT KEY
            int frequency = entry.getValue(); 
            goodPairs += Math.floor( (frequency * (frequency-1)) / 2);
        }
        return goodPairs;
    }
}