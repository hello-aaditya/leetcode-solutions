class Solution {
    public int findNumbers(int[] nums) {
        int totalNumber = 0;
        for(int i=0; i<nums.length; i++) {
            int digitOfCurrentNumber = findNumberOfDigit(nums[i]);
            if(digitOfCurrentNumber % 2 == 0) {
                totalNumber++;
            }
        }
        return totalNumber;
    }
    int findNumberOfDigit(int number) {
        int digit = 0;
        while(number != 0) {
            number /= 10;
            digit++;
        }
        return digit;
    }
}