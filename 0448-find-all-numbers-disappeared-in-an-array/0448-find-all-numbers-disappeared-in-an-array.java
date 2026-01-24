class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        int size = nums.length;
		int start=0;
		
		while (start < size) {
			int correctIndex = nums[start] - 1;
			if (nums[start] != nums[correctIndex]) {
				int temp = nums[correctIndex];
				nums[correctIndex] = nums[start];
				nums[start] = temp;
			} else {
				start++;
			}
		}

        ArrayList<Integer> list = new ArrayList<>();
        for (int i=0; i<size; i++) {
            if (i != nums[i]-1) {
                list.add(i+1);
            }
        }
        return list;
    }
}