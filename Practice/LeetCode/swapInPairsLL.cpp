// leetcode.com/problems/swap-nodes-in-pairs/submissions
#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
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
