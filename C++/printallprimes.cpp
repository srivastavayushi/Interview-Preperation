#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int start, end;
    cin >> start >> end;
    for (int i = start; i < end; i++)
    {
        int div;
        for (div = 2; div < i; div++)
        {
            if (i % div == 0)
            {
                break;
            }
        }
        if (div == i)
        {
            cout << i << endl;
        }
    }
}