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

int length(Node* head){
    Node* temp = head;

    int count =0;
    while(temp != NULL){
        temp=temp->next;
        count++;
    }
    return count;
}
        
// APPEND LAST K NODES

Node* appendLastK(Node* &head, int pos){
    Node* tail = head;
    Node* newhead;
    Node* newtail;

    int count=1;
    int l= length(head);

    while(tail->next != NULL){
        
        if(count == (l-pos)){
            newtail = tail;
        }
        if(count==(l-pos+1)){
            newhead = tail;
        }
        count++;
        tail = tail->next;
    }

    newtail->next = NULL;
    tail->next = head;
    return newhead;
    
}

// INTERSECT 2 LINKED LISTS

void intersect(Node* &head1,Node* &head2, int pos){
      Node* temp1 = head1;
    Node* temp2 = head2;
    pos--;
    while(pos--){
        temp1 = temp1->next;
    }
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp1;

}

// GET INTERSECTION POINT OF 2 LINKED LISTS

int intersection(Node* &head1, Node* &head2){
    Node* ptr1;
    Node* ptr2;

    int l1 = length(head1);
    int l2 = length(head2);

    int d=0;

    if(l1>l2){
        ptr1 = head1;
        ptr2=head2;
        d=l1-l2;
    }else{
        ptr1=head2;
        ptr2=head1;
        d=l2-l1;
    }

    while(d){
        ptr1 = ptr1->next;
        if(ptr1==NULL){
            return -1;
        }
        d--;
    }

    while(ptr1!=NULL && ptr2!= NULL){
        if(ptr1->data == ptr2->data){
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;

}

// MERGE 2 LL

Node* merge(Node* &head1, Node* &head2){
    Node* dummyNode = new Node(-1);
    Node* ptr1 = head1;
    Node* ptr2 = head2;
    Node* ptr3 = dummyNode;

    while(ptr1!=NULL&&ptr2!=NULL){
        
        if(ptr1->data < ptr2->data){
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }else{
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;
    }

    while(ptr1!=NULL){
        ptr3->next=ptr1;
        ptr1 = ptr1->next;
        ptr3 = ptr3->next;
    }
      while(ptr2!=NULL){
        ptr3->next=ptr2;
        ptr2 = ptr2->next;
        ptr3 = ptr3->next;
    }

    return dummyNode->next;

}

// second method

Node* mergeRecursive(Node* &head1, Node* &head2){
    Node* result;

    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }

    if(head1->data < head2->data){
        result = head1;
        result->next = mergeRecursive(head1->next,head2);
    }else{
        result=head2;
        result->next = mergeRecursive(head1,head2->next);
    }
    return result;
}

int main(){

    Node* head1 = NULL;
    Node* head2 = NULL;
    int arr1[]={1,3,5,8,9};
    for(int i=0;i<5;i++){
        insertAtEnd(arr1[i],head1);
    }
    int arr2[]={2,4,6,7,10,11,12,13};
     for(int i=0;i<8;i++){
        insertAtEnd(arr2[i],head2);
     }
     display(head1);
     display(head2);
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
 //   makeCycle(head,3);
//    detectCycle(head);
    // removeCycle(head);
    // detectCycle(head);
   // Node* newhead = appendLastK(head,3);
   // display(newhead);

  // intersect(head1,head2,4);
  // display(head1);
  // display(head2);
   //cout<<intersection(head1,head2)<<endl;
        Node* newhead = mergeRecursive(head1,head2);
        display(newhead);

}