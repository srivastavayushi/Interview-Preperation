// Move all the negative numbers of the array to the start of the array
#include <iostream>
#include <array>
using namespace std;

int main(){
    
    int n, arr[n];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int i=0, temp;
    for(int j=0;j<n;j++){
        if(arr[j]<0){
            arr[i]=temp;
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}
