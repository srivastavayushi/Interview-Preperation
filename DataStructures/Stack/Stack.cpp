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
            cout<<"Stack overflow"<<endl;
            return;
        }
        top++;
        arr[top] =x;
    }

    void pop(){
        if(top==-1){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        top--;
    }

    int Top(){
        return arr[top];
    }

    bool empty(){
        return (top==-1);
    }


};

int main(){

    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
   // cout<<st.Top()<<endl;
    st.pop();
   // cout<<st.Top()<<endl;
   cout<< st.empty()<<endl;


    return 0;
}