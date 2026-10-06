class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> firstSeen;
        firstSeen[0] = -1;          
        int sum = 0, best = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += (nums[i] == 1) ? 1 : -1;

            if (firstSeen.count(sum))
                best = max(best, i - firstSeen[sum]);
            else
                firstSeen[sum] = i;
        }
        return best;
    }
};