class Solution {
    public int numberOfSteps(int num) {
        int step = 0;

        int answer = fn(step, num);
        return answer;
    }
    public static int fn(int step, int num) {
        // BASE CONDITION
        if (num == 0) {
            return step;
        }

        if ((num & 1) == 0) {
            num /= 2;
            step = step + 1;
        } else {
            num -= 1;
            step = step + 1;
        }
        return fn(step, num);
     }
}