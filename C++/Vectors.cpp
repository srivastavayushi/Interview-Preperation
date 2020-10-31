#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // VECTOR DECLERATION METHOD
    vector<int> v1{10, 20, 30, 40, 50, 60};
    vector<char> v2(4);
    vector<int> v3(5, 10);
    vector<string> v4(3, "Ayushi");
    vector<int> v5;

    //Subscript Operator
    // cout << v4[0] << endl;
    // cout << v4[1] << endl;
    // cout << v4[2] << endl;

    //Printing through Loop
    // for (int i = 0; i <= 5; i++)
    // {
    //     cout << v1[i] << endl;
    // }

    //Push_back()
    cout << "Earlier the capacity was:" << v5.capacity() << endl;
    //v5.push_back(10);
    //cout << "Now the capacity is:" << v5.capacity() << endl;
    //v5.push_back(20);
    for (int i = 0; i <= 9; i++)
    {
        v5.push_back(10 * (i + 1));
    }
    for (int i = 0; i <= 9; i++)
    {
        cout << v5[i] << endl;
    }

    cout << "Now the capacity is:" << v5.capacity() << endl;

    //Pop_back()

    v5.pop_back();
    cout << "After Popping 100" << endl;
    cout << "Now the capacity is:" << v5.capacity() << endl;
    v5.pop_back();
    cout << "After Popping 90" << endl;
    cout << "Now the capacity is:" << v5.capacity() << endl;
    v5.pop_back();
    cout << "After Popping 80" << endl;
    cout << "Now the capacity is:" << v5.capacity() << endl;

    //size()
    cout << "Total number of elements:" << v5.size() << endl;

    //clear()
    // v5.clear();
    // cout << "After Clear()" << endl;
    // cout << "Now the capacity is:" << v5.capacity() << endl;
    // cout << "Total number of elements:" << v5.size() << endl;

    //at()
    cout << "Value at 3: " << v5.at(3) << endl;

    //front() and back()
    cout << "Front : " << v5.front() << endl;
    cout << "Back : " << v5.back() << endl;

    //enter value at middle
    vector<int>::iterator it = v5.begin();
    v5.insert(it + 3, 35);
    for (int i = 0; i <= 9; i++)
    {
        cout << v5[i] << endl;
    }
}
