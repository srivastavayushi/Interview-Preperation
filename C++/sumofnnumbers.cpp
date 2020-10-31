#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a;
    cin >> a;
    int sum = 0;

    for (int i = 1; i <= a; i++)
    {
        sum = sum + i;
    }
    cout << sum;
}