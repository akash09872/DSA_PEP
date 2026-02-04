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
};
void deleteAll(node * &head){
    if(!head) return;
    node *temp=head->next;
    while(while!=head){
        node * t=temp;
        temp=temp->next;
        delete t;
    }
    delete head;
    head=NULL;
}
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
    if(!head) return;
    node *temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
}
void deleteLast(node* &head){
    if(!head) return;
    node *temp=head;
    if(temp->next==head){
        head=NULL;
        delete temp;
        return;
    }
    do{
        temp=temp->next;
    }while(temp->next->next!=head);
    node *toDel=temp->next;
    temp->next=head;
    delete toDel;
}
void deleteAtBeginning(node* &head){
    if(!head) return;
    node *temp=head;
    while(temp->next!=head) temp=temp->next;
    node *toDel=head;
    temp->next=head->next;
    head=head->next;
    delete toDel;
}
int main(){
    node *head=NULL;
    for(int i=1;i<6;i++) insertAtEnd(head,i);
    deleteAtBeginning(head);
    printList(head);

    deleteAll(head);
}