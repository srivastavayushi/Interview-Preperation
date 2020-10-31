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
    int result = 0;
    for (int i = 1; i <= 10; i++)
    {
        result = i * n;
        cout << result << "\n";
    }
}
