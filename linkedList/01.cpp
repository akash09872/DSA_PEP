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
    if(!head) return;
    if(head->next==NULL){
        delete head;
        head=NULL;
        return;
    }
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
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
void deleteAtNth(node* &head, int n){
    if(!head) return;
    node *temp=head;
    if(n==1){
        head=head->next;
        delete temp;
        return;
    }
    int j=1;
    while(j<n-1 && temp!=NULL){
        j++;
        temp=temp->next;
    }
    node *t=temp->next;
    temp->next=temp->next->next;
    delete t;
}

int countEven(node *head){
    if(!head) return 0;
    int count=0;
    node *temp=head;
    while(temp!=NULL){
        if(temp->data%2==0) count++;
        temp=temp->next;
    }
    return count;
}

bool search(node *head,int target){
    if(!head) return false;
    if(head->data==target) return true;
    return search(head->next, target);
}
int main(){
    // int n;
    node * head=NULL;
    for(int i=0;i<5;i++) {
        isnertAtStart(head,i+1);
    }
    // deleteLast(head);
    cout<<search(head,5);
}