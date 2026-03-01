// leetcode.com/problems/palindrome-linked-list
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
    void reverse(ListNode* &head){
        if(!head) return;
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* n=curr->next;
        while(curr){
            n=curr->next;
            curr->next=prev;
            prev=curr;
            curr=n;
        }
        head=prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* prev=NULL;
        while(fast && fast->next){
            fast=fast->next->next;
            prev=slow;
            slow=slow->next;
        }
        if(prev)prev->next=NULL;
        reverse(slow);
        fast=head;
        while(fast && slow){
            if(fast->val!=slow->val) return false;
            fast=fast->next;
            slow=slow->next;
        }
        return true;
        
    }
};