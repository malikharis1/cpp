#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter the number one and number two : ";
    cin >> num1 >> num2;
    char operation;
    cout << "Enter the operation you want to perform on " << num1 << " and " << num2 << " = ";
    cin >> operation;

    switch (operation)
    {
    case '+':
        cout << (num1 + num2) << endl;
        break;
    case '*':
        cout << (num1 * num2) << endl;
        break;
    case '-':
        cout << (num1 - num2) << endl;
        break;
    case '/':
        cout << (num1 / num2) << endl;
        break;
    default:
        cout << "Please use only +,-,/,* operator only";
        break;
    }
    return 0;
}