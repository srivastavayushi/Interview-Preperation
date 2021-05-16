#include <iostream>
using namespace std;

#define n 100

class Stack{

    int* arr;
    int top;

    public:
    Stack(){
        arr = new int[n];
        top = -1;
    }

    void push(int x){
        if(top == n-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop(){
        if(top ==-1){
            cout<<"Stack Underflow"<<endl;
        }
        top--;
    }
    int top(){
        return arr[top];
    }

};

int main(){

    return 0;
}