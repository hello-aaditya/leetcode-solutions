class Solution {
    public boolean isHappy(int n) {
        int slow = n;
        int fast = n;

        do {
            slow = findSquare(slow);
            fast = findSquare(findSquare(fast));

        } while (slow != fast);
        
        if (slow == 1) {
            return true;
        }
        return false;
    }
    public int findSquare(int number) {
        int square = 0;
        while (number != 0) {
            int lastDigit = number % 10;
            square += (lastDigit * lastDigit);
            number /= 10;
        }
        return square;
    }
}