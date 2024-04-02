#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the amount: ";
    cin >> num;
    int amountLeft = num;
    int notes;

    notes = amountLeft / 100;
    amountLeft -= notes * 100;
    cout << "Number of 100 notes: " << notes << endl;

    notes = amountLeft / 50;
    amountLeft -= notes * 50;
    cout << "Number of 50 notes: " << notes << endl;

    notes = amountLeft / 20;
    amountLeft -= notes * 20;
    cout << "Number of 20 notes: " << notes << endl;

    notes = amountLeft / 10;
    amountLeft -= notes * 10;
    cout << "Number of 10 notes: " << notes << endl;

    if (amountLeft != 0)
        cout << "There is a remaining amount: " << amountLeft << endl;

    return 0;
}
