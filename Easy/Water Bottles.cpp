class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int res = numBottles, carry, full;
        while (numBottles >= numExchange) {
            carry = numBottles % numExchange;
            full = numBottles / numExchange;
            res += full;
            numBottles = carry + full;
        } return res;
    }
};
