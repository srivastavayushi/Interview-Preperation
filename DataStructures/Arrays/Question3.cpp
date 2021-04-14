// WAP to print reverse Array
#include <iostream>
#include <array>
using namespace std;

int main(){
    int arr[10];

    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(int i=10;i>0;i--){
        cout<< arr[i]<<" ";
    }
    return 0;

}