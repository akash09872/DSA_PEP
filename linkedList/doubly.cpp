#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int val=0){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void insertAtEnd(node * &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}

void isnertAtStart(node* &head,int val){
    node *n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    n->next=head;
    head->prev=n;
    head=n;
}

void insertAtPosition(node* &head,int n, int val){
    node * temp=head;
    if(n==1) {
        isnertAtStart(head,val);
        return;
    }
    node* nn=new node(val);
    for(int i=1;i<n-1 && temp!=NULL;i++){
        temp=temp->next;
    }
    if(!temp) return;
    nn->next=temp->next;
    temp->next->prev=nn;
    temp->next=nn;
    nn->prev=temp;
}

void printList(node *head){
    if(head==NULL) return;
    cout<<head->data<<" ";
    printList(head->next);
}



int main(){
    node * head=NULL;
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtPosition(head,4,4);
    printList(head);
    
}