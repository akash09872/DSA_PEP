ListNode* swapPairs(ListNode* head) {
    if(!head || !head->next) return head;
    ListNode* temp=head;
    ListNode* next=head->next;
    temp=next;
    next=next->next;
    temp->next=head;
    head->next=(swapPairs(next));
    return temp;
}
