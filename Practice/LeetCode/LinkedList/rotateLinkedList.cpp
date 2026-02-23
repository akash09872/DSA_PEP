// https://leetcode.com/problems/rotate-list

ListNode* rotate(ListNode* head, int k) {
    if(k==0) return head;
    ListNode* temp=head;
    ListNode* prev=temp;
    while(temp->next!=NULL) {
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    temp->next=head;
    return rotateRight(temp,k-1);
}
ListNode* rotateRight(ListNode* head, int k){
    if(!head || !head->next) return head;
    int count=0;
    ListNode* temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    k=k%count;
    return rotate(head,k);
}