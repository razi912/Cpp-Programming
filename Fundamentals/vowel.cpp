// Input a character and check whether it is a vowel or consonant.

#include <iostream>
using namespace std;

int main()
{

    char ch;
    cout << "enter a letter:" << endl;
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout << "vowel" << endl;
    }
    else
    {
        cout << "consonant" << endl;
    }
}