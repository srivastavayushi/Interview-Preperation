#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
   
};

void insertAtEnd(int val,Node* &head){
    Node* n = new Node(val);

    if(head == NULL){
        head = n;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp= temp->next;
    }

    temp->next = n;
}

void insertAtHead(int val,Node* &head){

    Node*n = new Node(val);
    n->next=head;
    head=n;

}

void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
       // cout<<"||"<<temp->data<<"|"<<temp->next<<"||"<<" -> ";
       cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void deleteAtHead(Node* &head){
    Node* todelete = head;
    head = head->next;
    delete todelete;
}

bool search(Node* head,int key){
    Node* temp= head;
    while(temp!=NULL){
        if(temp->data==key){
            cout<<"FOUND"<<endl;
            return true;
        }
        temp=temp->next;
    }
    cout<<"NOT-FOUND"<<endl;
    return false;
}

void deletion(Node* head,int key){

// IF NO NODE EXISTS
    if(head==NULL){
        return;
    }

// IF ONLY ONE NODE EXISTS
    if(head->next==NULL){
        deleteAtHead(head);
        return;
    }

    Node* temp=head;
    while(temp->next->data != key){
        temp=temp->next;
    }
    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

// REVERSING

// Ist METHOD

Node* reverse(Node* &head){
    Node* prevptr =NULL;
    Node* currentptr = head;
    Node* nextptr;

    while(currentptr != NULL){
        nextptr = currentptr->next;
        currentptr->next =prevptr;

        prevptr = currentptr;
        currentptr = nextptr;
    }

    return prevptr;
};
// 2nd METHOD
Node* reverseRecursive(Node* &head){

    if(head==NULL||head->next==NULL){
        return head;
    }
    Node* newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}

// REVERSE K-NODES

Node* reverseK(Node* &head, int k){
    Node* prevptr = NULL;
    Node* currentptr = head;
    Node* nextptr;

    int count=0;

    while(currentptr != NULL&&count<k){
        nextptr = currentptr->next;
        currentptr->next = prevptr;

        prevptr = currentptr;
        currentptr = nextptr;

        count++;
    }
    if(nextptr != NULL){
        head->next = reverseK(nextptr,k);
    }
    return prevptr;
}

// MAKE A CYCLE

void makeCycle(Node* &head, int position){
    Node* temp =head;
    Node* startNode;
    int count =1;
    while(temp != NULL){
        if(count==position){
        startNode = temp;
    }
        temp=temp->next;
        count++;
    }
    temp->next = startNode;

    
    
};

// DETECT A CYCLE

bool detectCycle(Node* head){

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow=slow->next;
        fast = fast->next->next;

        if(slow==fast){
            return true;
        }
    }
    return false;
}

// REMOVE A CYCLE
void removeCycle(Node* head){
    Node* slow = head;
    Node* fast = head;

    do{
        slow=slow->next;
        fast = fast->next->next;

    }while(slow != fast);

    fast = head;

    while(slow->next != fast->next){
        slow=slow->next;
        fast=fast->next;
    }

    slow->next = NULL;

} 
        
    


int main(){

    Node* head = NULL;
    insertAtEnd(1,head);
    insertAtEnd(2,head);
    insertAtEnd(3,head);
    insertAtEnd(4,head);
    insertAtEnd(5,head);
    insertAtHead(0,head);
    insertAtEnd(6,head);
    insertAtEnd(7,head);
    insertAtEnd(8,head);
    display(head);
//  search(head,4);
//  search(head,8);
//  deletion(head,3);
//  deleteAtHead(head);
//  deleteAtHead(head);
//  display(head);
//    Node* newhead = reverseRecursive(head);
 //  int k =3;   
 //  Node* newhead = reverseK(head,k);
 //  display(newhead);
    makeCycle(head,3);
    detectCycle(head);
    // removeCycle(head);
    // detectCycle(head);
    
}