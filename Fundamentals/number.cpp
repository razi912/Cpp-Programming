// Input a number and print whether it is positive, negative, or zero.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;
    if (num < 0)
        cout << "negative" << endl;
    else if (num == 0)
        cout << "zero" << endl;
    else
        cout << "positive" << endl;
}
