// https://leetcode.com/problems/odd-even-linked-list/description/

ListNode* oddEvenList(ListNode* head) {
    if(!head || !head->next) return head;
    ListNode* odd=head;
    ListNode* even=head->next;
    ListNode* firstEven=even;
    while(even!=NULL && even->next!=NULL){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=firstEven;
    return head;
}
