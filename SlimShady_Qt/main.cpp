#include <iostream>
#include "funcs.h"

using namespace std;

int main()
{
    cout << "Input the two numbers" << endl;
    double a, b;
    cin >> a;
    cin >> b;
    cout << "What did you wanna do with your numbers?" << endl;
    cout << "Input: '1' if you wanna get summ" << endl
         << "       '2' if you wanna get difference." << endl
         << "       '3' if you wanna get multiplicate" << endl
         << "       '4' if you wanna get division" << endl;
    char n;
    cin >> n;
    cout << "And your answer is: ";
    switch (n)
    {
        case '1':
            cout << Summ(a, b) << endl;
            break;
        case '2':
            cout << Diff(a, b) << endl;
            break;
        case '3':
            cout << "The feature is still development. Sorry" << endl;
            break;
        case '4':
            cout << Division(a, b) << endl;
            break;
        default:
            cout << "Not like that! Goodby." <<endl;
            break;
    }
    system("pause");
    return 0;
}
