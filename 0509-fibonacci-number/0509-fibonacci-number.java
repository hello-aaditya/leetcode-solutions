class Solution {
    static int fibonacci = 0;
    public int fib(int n) {
        // BASE CONDITION
        if ( (n == 0) || (n == 1) ) {
            return n;
        }
        
        return (fib(n-1) + fib(n-2));
    }
}