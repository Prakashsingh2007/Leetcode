class Solution {
public:
    /*
    Returns true if n is a Perfect Number
    by using divisor pairs up to sqrt(n).
    */
    bool checkPerfectNumber(int n) {
        /* Numbers less than or equal to 1 cannot be perfect. */
        if (n <= 1) {
            return false;
        }
 
        /* Starts with 1 because it is always a proper divisor for n > 1. */
        int sum = 1;
 
        for (int i = 2; i * i <= n; i++) {
            /* Only exact divisors can contribute to the divisor sum. */
            if (n % i == 0) {
                /* Add the divisor only once when i is the square root of n. */
                if (i * i == n) {
                    sum += i;
                } else {
                    /* Add both paired divisors because both are proper divisors. */
                    sum += i + (n / i);
                }
            }
        }
 
        return sum == n;
    }
};