class Solution {
public:
    bool isHappy(int n) {

        unordered_map<int, int> mpp;

        while (true) {

            // Have I already seen this number?
            if (mpp.count(n)) {
                return false;
            }

            // Remember current number
            mpp[n] = 1;

            int value = 0;

            // Find sum of squares of digits
            while (n != 0) {
                int last = n % 10;
                value += last * last;
                n /= 10;
            }

            // Reached 1
            if (value == 1) {
                return true;
            }

            // Generated number becomes current number
            n = value;
        }
    }
};