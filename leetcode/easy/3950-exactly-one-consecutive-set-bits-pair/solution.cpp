class Solution {
public:
    bool consecutiveSetBits(int n) {
        return (n & (n >> 1)) != 0;
    }
};