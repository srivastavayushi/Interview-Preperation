#include <iostream>
#include <array>
using namespace std;

void func(int n){
    if(n==0)
    return;
    int t;
    cin>>t;
    func(n-1);
    cout<<t;
}

int main(){
    int n;
    cin>>n;
    func(n);
    return 0;
}