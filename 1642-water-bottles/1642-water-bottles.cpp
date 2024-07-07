class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int sum = numBottles;
        while(numBottles >= numExchange)
        {
            int div = numBottles / numExchange;
            int rem = numBottles % numExchange;
            sum += div;
            numBottles = div + rem;
        }
        return sum;
    }
};