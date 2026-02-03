#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node(int val){
        data=val;
        next=NULL;
    }
    ~node(){
        delete this;
    }
};

void insertAtEnd(node* head,int val){
    node * n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    while(head->next!=NULL){
        head=head->next;
    }
    head->next=n;
}
void isnertAtStart(node* &head,int val){
    node *n=new node(val);
    n->next=head;
    head=n;
}
void printList(node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

void deleteLast(node* &head){
    node* temp=head;
    node* prev=temp;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    if(prev==temp) head=NULL;
    prev->next=NULL;
    delete temp;
}
void insertAtN(node * &head,int n,int val){
    node *temp=head;
    if(n==1) {
        isnertAtStart(head,val);
        return;
    }
    for(int i=1;i<n-1 && temp->next!=NULL;i++){
        temp=temp->next;
    }
    node *nn=new node(val);
    nn->next=temp->next;
    temp->next=nn;
}

int main(){
    // int n;
    node * head=NULL;
    for(int i=0;i<5;i++){
        isnertAtStart(head,i+1);
    }
    deleteLast(head);
    printList(head);

}