#include <iostream>
using namespace std;

class Complex{

    public:
    int a;
    int b;
    Complex(void){
        a=10;
        b=20;
        cout<<"Hello World"<<endl;
    }
    void printNumber(){
        cout<<"Your number is : " <<a<<" + "<<b<<"i"<<endl;
    }
};

int main(){
    Complex c;
    c.printNumber();
}
