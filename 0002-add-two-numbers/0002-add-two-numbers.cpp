class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* cur1 = l1;
        ListNode* cur2 = l2;
        ListNode* prev = NULL;
        int carry = 0;

        while (cur1 != NULL && cur2 != NULL) {
            int sum = cur1->val + cur2->val + carry;
            cur1->val = sum % 10;
            carry = sum / 10;
            prev = cur1;
            cur1 = cur1->next;
            cur2 = cur2->next;
        }
        
        if (cur2 != NULL) {
            prev->next = cur2;
            cur1 = cur2;
        }
        while (cur1 != NULL) {
            int sum = cur1->val + carry;
            cur1->val = sum % 10;
            carry = sum / 10;
            prev = cur1;
            cur1 = cur1->next;
        }
        if (carry > 0) {
            prev->next = new ListNode(carry);
        }
        
        return l1;
    }
};
