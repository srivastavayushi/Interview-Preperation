#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c)
    {
        cout << "Equilateral";
    }
    else if (a == b || a == c || b == c)
    {
        cout << "Iscoceles";
    }
    else
    {
        cout << "Scalene";
    }

    return 0;
}