class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;
        for (int i = 0; i < operations.size(); i++)
        {
            string ch = operations[i];
            if (ch == "C")
            {
                ans.pop_back();
            }
            else if (ch == "D")
            {
                int n = ans.back();
                ans.push_back(2 * n);
            }
            else if (ch == "+")
            {
                int j = ans.size() - 1;
                int n = ans[j];
                int m = ans[j - 1];
                ans.push_back(n + m);
            }
            else
            {
                int n = stoi(ch);
                ans.push_back(n);
            }
        }

        int sum = 0;
        for (int x : ans) sum += x;
        return sum;
    }
};