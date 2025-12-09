/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* cur = head;

        // hitung length
        int length = 0;
        while (cur != NULL) {
            length++;
            cur = cur->next;
        }

        int hapus = length - n;
        
        if (hapus == 0) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        cur = head;
        int i = 0;
        while (i < hapus - 1) {
            cur = cur->next;
            i++;
        }
        ListNode* del = cur->next;
        cur->next = del->next;
        delete del;

        return head;
    }
};
