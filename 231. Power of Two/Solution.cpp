#include <math.h>

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) {
            return false;
        }
        return std::log2(n) == (int)std::log2(n);
    }
};