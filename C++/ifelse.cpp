#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int savings;

    cin >> savings;

    if (savings > 5000)
    {
        if (savings > 10000)
        {
            cout << "Go to road trip with neha\n";
        }
        else
        {
            cout << "shopping with neha \n";
        }
    }
    else if (savings > 2000)
    {
        cout << "Go with Rashmi" << endl;
    }
    else
    {
        cout << "Go with friends" << endl;
    }
}