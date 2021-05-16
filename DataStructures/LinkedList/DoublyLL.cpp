#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data=val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(Node* &head,int val){
    Node* n = new Node(val);
    n->next=head;

    if(head != NULL){
        head->prev = n;
    }   
    head=n;
}
void insertAtTail(Node* &head, int val){

    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    
    Node* temp=head;
    Node* n = new Node(val);
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
    
}
Node* deleteAtHead(Node* &head){
    Node* todelete = head;

    head=head->next;
    head->prev=NULL;
    delete todelete;
    return head;

}
void deletion(Node* &head,int pos){
    Node* temp = head;

    if(pos==1){
        deleteAtHead(head);
        return;
    }

    int count =1;

    while(temp != NULL && count!=pos){
        temp=temp->next;
        count++;
    }
    Node* todelete = temp;
    if(temp->next != NULL){
          temp->next->prev = temp->prev;
    }
  
    temp->prev->next = temp->next;
    delete todelete;
}

void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    }

int main(){

    Node* head = NULL;
   
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    display(head);
   // insertAtHead(head,1);
   deletion(head,3);
   deletion(head,1);
    display(head);
    
return 0;
}
