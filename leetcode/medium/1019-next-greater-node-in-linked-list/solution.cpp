class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        for (ListNode* temp = head; temp; temp = temp->next) {
            ListNode* curr = temp->next;
            while (curr && curr->val <= temp->val) {
                curr = curr->next;
            }
            ans.push_back(curr ? curr->val : 0);
        }
        return ans;
    }
};