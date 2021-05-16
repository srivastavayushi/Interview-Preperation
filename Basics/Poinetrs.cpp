#include<iostream>

using namespace std;
 void swap(int *a,int *b){
    int temp;
    temp =*a;
    *a=*b;
    *b=temp;
  }

int main(){
    int a =10;
    int*aptr = &a;
    int**ptr1 = &aptr;
    cout<<*aptr<<endl;

    cout<<aptr<<endl;
    aptr++;
    cout<<aptr<<endl;

    cout<<ptr1<<endl;

    // char ch = 'a';
    // char*chptr = &ch; 
    // cout<<*chptr<<endl;

    // cout<<chptr<<endl;
    // chptr++;
    // cout<<chptr<<endl;

    // ARRAY and POINTERS

    int arr[] ={10,20,30,40};

    cout<<*arr<<endl;

    int* ptr = arr;
    for(int i=0;i<4;i++){
      // cout<<*ptr<<endl;
      // ptr++;
      cout<<*(arr+i)<<endl;
    }
   // Increment with use of Pointers
 
   int one=3;
   int two = 4;

   cout<<"Value of one :"<<one<<endl;
   cout<<"Value of two :"<<two<<endl;

  int* onePtr = &one;
  int* twoPtr = &two;

   swap(onePtr,twoPtr);
   cout<<"Value of one :"<<one<<endl;
   cout<<"Value of two :"<<two<<endl;


    return 0;
}