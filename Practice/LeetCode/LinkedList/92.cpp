// leetcode.com/problems/reverse-linked-list-ii

#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverse(ListNode* head){
        if(!head) return head;
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* n=curr->next;
        while(n){
            n=curr->next;
            curr->next=prev;
            prev=curr;
            curr=n;
            if(n)n=n->next;
        }
        curr->next=prev;
        return curr;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* k=NULL;
        for(int i=0;i<left-1;i++){
            k=slow;
            slow=slow->next;
        }
        for(int i=0;i<right-1;i++){
            fast=fast->next;
        }
        ListNode* l=NULL;
        if(fast) {
            l=fast->next;
            fast->next=NULL;
        }
        if(k){
            k->next=reverse(k->next);
            cout<<k->next->val;
        }else if(left==1){
            head=reverse(head);
        }
        while(fast->next!=NULL) fast=fast->next;
        fast->next=l;
        return head;
    }
};