#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << n << " is not prime" << endl;
            break;
        }
        else
        {
            cout << n << " is prime" << endl;
            break;
        }
    }
    return 0;
}