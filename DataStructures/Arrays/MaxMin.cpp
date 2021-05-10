// Print Maximum and Minimum number in an array
#include <iostream>
#include<climits>
using namespace std;

int main(){


    int arr[5];

    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for(int i=0; i<5;i++){
        cin>>arr[i];
    }


    // Method 1:

      cout<<" ------- FIRST METHOD --------"<<endl;
   

    for(int i=0; i<5;i++){
        if(arr[i]>maxNo){
            maxNo=arr[i];
        }
        if(arr[i]<minNo){
            minNo=arr[i];
        }
    }

    cout<< "Maximum number : "<<maxNo<<endl;
    cout<< "Minimum number : "<<minNo<<endl;
   
    // SECOND METHOD 

    cout<<" ------- SEC0ND METHOD --------"<<endl;

    for(int i=0;i<5;i++){
       maxNo= max(maxNo,arr[i]);
        minNo = min(minNo,arr[i]);
    }
       cout<< "Maximum number : "<<maxNo<<endl;
    cout<< "Minimum number : "<<minNo<<endl;

    return 0;
}