// Transpose of 2D Matrix
#include <iostream>
#include<array>
using namespace std;

int main(){
    int arr[row][col];
    cin>>row>>col;

    for(int i=0; i<row; i++){
        for(int j=0;j<col;j++){
            cin>>arr[row][col];
        } 
    }
    int array[col][row];
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[row][col]=array[col][row]<<" ";
        }
    }
    
}