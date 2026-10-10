class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        unordered_set<int> seen;
        for (int i = left; i <= right; i++) seen.insert(i);

        for (auto& r : ranges) {
            for (int x = r[0]; x <= r[1]; x++) {
                seen.erase(x);
            }
        }
        return seen.empty();
    }
};