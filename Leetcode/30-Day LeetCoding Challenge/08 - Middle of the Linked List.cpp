/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* one = head;
        ListNode* two = head;
        while(two !=NULL and two->next != NULL){
            one = one->next;
            two = two->next->next;
        }
        return one;
    }
};