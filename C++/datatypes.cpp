#include <iostream>
using namespace std;

int main()
{
    int a;
    a = 12;
    float b;
    char c;
    bool d;

    cout << "size of int : " << sizeof(a) << endl;
    cout << "size of float : " << sizeof(b) << endl;
    cout << "size of char : " << sizeof(c) << endl;
    cout << "size of bool : " << sizeof(d) << endl;

    // TYPE MODIFIERS
    short int si;
    long int li;
    cout << "size of short int : " << sizeof(si) << endl;
    cout << "size of long int : " << sizeof(li) << endl;

    return 0;
}