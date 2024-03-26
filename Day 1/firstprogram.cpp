#include <iostream>
using namespace std;

int main() {
    // Printing string
    cout << "haris malik" << endl;

    // Printing integer
    int a = 12;
    cout << "Integer: " << a << "\n";

    // Printing character
    char ch = 'h';
    cout << "Character: " << ch << "\n";

    // Printing boolean
    bool bl = true;
    cout << "Boolean: " << bl << "\n";

    // Printing float
    float fl = 1.12;
    cout << "Float: " << fl << "\n";

    // Printing double
    double db = 1.12;
    cout << "Double: " << db << "\n";

    // Getting size of int variable
    int size = sizeof(a);
    cout << "Size of int variable: " << size << "\n";

    // Type casting
    int cast1 = 'a'; // Implicit conversion from char to int
    cout << "Type casting from char to int: " << cast1 << "\n";

    char cast2 = 34; // Implicit conversion from int to char
    cout << "Type casting from int to char: " << cast2 << "\n";

    // unsigned int
    unsigned int unnumber = 122;
    cout << "Unsigned int: " << unnumber << endl;

    // Arithmetic operations
    int op1 = 22 / 13; // Integer division, result is floor value
    cout << "Integer division: " << op1 << "\n";

    // Relational operators
    int num1 = 10, num2 = 20;
    cout << "Relational operators:\n";
    cout << "Equal to: " << (num1 == num2) << endl; // false, num1 is not equal to num2
    cout << "Not equal to: " << (num1 != num2) << endl; // true, num1 is not equal to num2
    cout << "Greater than: " << (num1 > num2) << endl; // false, num1 is not greater than num2
    cout << "Less than: " << (num1 < num2) << endl; // true, num1 is less than num2
    cout << "Greater than or equal to: " << (num1 >= num2) << endl; // false, num1 is not greater than or equal to num2
    cout << "Less than or equal to: " << (num1 <= num2) << endl; // true, num1 is less than or equal to num2

    // Logical operators
    int ex = 23;
    cout << "Logical operators:\n";
    cout << "Logical NOT: " << !ex << endl; // Logical NOT, prints false because ex is non-zero
    cout << "Logical AND: " << (true && false) << endl; // Logical AND, prints false because one operand is false
    cout << "Logical OR: " << (true || false) << endl; // Logical OR, prints true because one operand is true

    return 0;
}
