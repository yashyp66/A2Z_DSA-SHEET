class Solution {
public:
    int digitProduct(int num) {
        int product = 1;

        // Special case for 0
        if (num == 0) return 0;

        while (num > 0) {
            product *= (num % 10);
            num /= 10;
        }

        return product;
    }

    int smallestNumber(int n, int t) {
        while (true) {
            if (digitProduct(n) % t == 0)
                return n;
            n++;
        }
    }
};
