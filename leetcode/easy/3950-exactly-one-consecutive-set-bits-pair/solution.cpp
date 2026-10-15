class Solution {
public:
    bool consecutiveSetBits(int n) {
        int pairs = 0;
        while (n > 0) {
            if ((n & 3) == 3) pairs++;  
            n >>= 1;
        }
        return pairs == 1;
    }
};