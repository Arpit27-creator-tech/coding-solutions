class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> vals, ans;
        stack<int> st; 
        int i = 0;
        for (ListNode* p = head; p; p = p->next, i++) {
            vals.push_back(p->val);
            ans.push_back(0);
            while (!st.empty() && vals[st.top()] < p->val) {
                ans[st.top()] = p->val;
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};