#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val=0){
        data=val;
        next=NULL;
    }
    ~node(){
        delete this;
    }
};
void insertAtEnd(node* &head, int val){
    node *temp=head;
    node *n=new node(val);
    if(!head){
        head=n;
        n->next=head;
        return;
    }
    while(temp->next!=head) temp=temp->next;
    n->next=head;
    temp->next=n;
}
void isnertAtStart(node* &head, int val){
    node* n=new node(val);
    if(!head){
        head=n;
        n->next=head;
        return;
    }
    node * temp=head;
    while(temp->next!=head) temp=temp->next;
    temp->next=n;
    n->next=head;
    head=n;
}
void printList(node *head){
    node *temp=head;
    if(!temp) return;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
}


int main(){
    node *head=NULL;
    for(int i=1;i<6;i++) isnertAtStart(head,i);
    deleteLast(head);
    printList(head);
}