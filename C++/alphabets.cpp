#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    char input;
    cin >> input;

    int isUpperCaseVowel = (input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U');
    int isLowerCaseVowel = (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u');

    if (isUpperCaseVowel || isLowerCaseVowel)
    {
        cout << "Vowel \n ";
    }
    else
    {
        cout << "Alphabet";
    }
    return 0;
}
