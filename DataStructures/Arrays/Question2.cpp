// Rotate an Array towards left by n elements
#include <iostream>
#include<array>
using namespace std;
void reverse(int arr[], int s, int e){
    while(s<e){
        int temp;
        temp = arr[s];
        arr[s]= arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}
int main(){
    int n, arr[n],rot;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>rot;
    rot=rot%n;
    if(rot!=0){
        reverse(arr,0,rot-1);
        reverse(arr,rot,n-1);
        reverse(arr, 0, n-1);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}