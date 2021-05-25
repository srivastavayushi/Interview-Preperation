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

class Stack{

    Node* head;
    int size;
public:
    Stack(){
        head = NULL;
        size =0;
    }

    int getSize(){
        return size;
    }

    void push(int element){
        
        Node* n = new Node(element);
        n->next = head;
        head = n;
        size++;
    }
    int pop(){
        if(size==0){
            cout<<"Stack Underflow"<<endl;
            return 0;
        }
        Node* todelete = head;
        int x = head->data;
        head = head->next;
        delete todelete;
        size--; 
        return x;
    }
    int top(){
        return head->data;
    }
    bool isEmpty(){
        return (head == NULL);
    }
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<endl;
    }

};

int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
     st.push(5);
    st.push(6);
    st.display();
    cout<<st.getSize()<<endl;
    cout<<"Element poped :" <<st.pop()<<endl;
     cout<<"Element poped :" <<st.pop()<<endl;
      st.display();
    cout<<st.getSize()<<endl;
    cout<<"The top element is : "<<st.top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();


    return 0;
}