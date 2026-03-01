// https://leetcode.com/problems/rotate-list
#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
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