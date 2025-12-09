class Solution {
public:
    void insertLast(ListNode*& l, int val){
        ListNode* p = new ListNode(val);

        if (l == nullptr){
            l = p;
        } else {
            ListNode* last = l;
            while (last->next != nullptr){
                last = last->next;
            }
            last->next = p;
        }
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* newList = nullptr;

        ListNode* cur1 = list1;
        ListNode* cur2 = list2;

        while (cur1 != nullptr || cur2 != nullptr) {
            if (cur1 == nullptr) {
                insertLast(newList, cur2->val);
                cur2 = cur2->next;
            }
            else if (cur2 == nullptr) {
                insertLast(newList, cur1->val);
                cur1 = cur1->next;
            }
            else if (cur1->val < cur2->val) {
                insertLast(newList, cur1->val);
                cur1 = cur1->next;
            }
            else {
                insertLast(newList, cur2->val);
                cur2 = cur2->next;
            }
        }

        return newList;
    }
};
