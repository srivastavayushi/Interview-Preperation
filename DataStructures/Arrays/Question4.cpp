// Find second largest element in an array
#include <iostream>
#include <array>
using namespace std;

int main(){
    int n, arr[n],max=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
    return 0;
}