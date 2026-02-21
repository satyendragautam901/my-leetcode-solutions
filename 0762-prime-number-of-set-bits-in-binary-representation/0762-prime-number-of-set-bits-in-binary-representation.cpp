class Solution {
public:
    bool isPrime(int n) {
        // 0 and 1 are not prime numbers, and negative numbers are not in the
        // scope of prime numbers
        if (n <= 1) {
            return false;
        }
        // 2 is the only even prime number
        if (n == 2) {
            return true;
        }
        // All other even numbers are not prime
        if (n % 2 == 0) {
            return false;
        }

        // Check for odd divisors from 3 up to the square root of n
        for (int i = 3; i <= sqrt(n); i += 2) {
            if (n % i == 0) {
                return false; // Found a divisor, so it's not prime
            }
        }

        return true; // No divisors found, so it is prime
    }
    int countSetBitsNaive(int n) {
        int count = 0;
        while (n > 0) {
            // Check if the rightmost bit is set
            if (n & 1) {
                count++;
            }
            // Right shift by one to check the next bit
            n >>= 1;
        }
        return count;
    }
    int countPrimeSetBits(int left, int right) {
        int ans = 0;
        for (int i = left; i <= right; i++) {
            int count = countSetBitsNaive(i);
            if (isPrime(count)) {
                ans++;
            }
        }
        return ans;
    }
};