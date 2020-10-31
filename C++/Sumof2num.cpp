#include <iostream>
using namespace std;

int Sum(int a, int b)
{
    int sum = a + b;
    return sum;
}

int main()
{
    int num1;
    int num2;
    cout << "Enter first number :" << endl;
    cin >> num1;
    cout << "Enter second number :" << endl;
    cin >> num2;
    cout << "Sum of both numbers:" << Sum(num1, num2) << endl;
}