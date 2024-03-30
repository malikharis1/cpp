#include <iostream>
using namespace std;

int main()
{
    // Bitwise operators: &, |, ~, ^
    // Definition: Bitwise operators perform operations on individual bits of integers.
    // Example:
    int a = 4;
    int b = 6;
    cout << (a & b) << endl; // Bitwise AND: 4
    cout << (a | b) << endl; // Bitwise OR: 6
    cout << ~a << endl;      // Bitwise NOT: -5
    cout << (a ^ b) << endl; // Bitwise XOR: 2

    // Right shift and left shift
    // Definition: Right shift and left shift operators move the bits of a number left or right.
    // Example:
    cout << (17 >> 1) << endl; // Right shift by 1: 8
    cout << (17 >> 2) << endl; // Right shift by 2: 4
    cout << (19 >> 1) << endl; // Right shift by 1: 9
    cout << (19 >> 2) << endl; // Right shift by 2: 4

    // Post increment and pre increment
    // Definition: Post increment and pre increment operators increase the value of a variable by 1.
    // Example:
    int i = 10;
    cout << i++ << endl; // Post increment: 10
    cout << i << endl;   // 11
    int n = 10;
    cout << --n << endl; // Pre increment: 9
    cout << n << endl;   // 9

    // For loop
    // Definition: The for loop is used to iterate over a block of code multiple times.
    // Example: Printing numbers from 0 to 9.
    for (int p = 0; p < 10; p++)
    {
        cout << p << " ";
    }
    cout << endl;

    // Fibonacci series
    // Definition: Fibonacci series is a series of numbers in which each number is the sum of the two preceding ones.
    // Example: Printing the Fibonacci series up to 10 terms.
    int a1 = 0, b1 = 1;
    cout << a1 << " " << b1 << " ";
    for (int number = 1; number <= 8; number++)
    {
        int next = a1 + b1;
        cout << next << " ";
        a1 = b1;
        b1 = next;
    }
    cout << endl;

    // Prime number
    // Definition: A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself.
    // Example: Checking if a given number is prime.
    int primnumber, flag = 0;
    cout << "Enter a number: ";
    cin >> primnumber;
    for (int i = 2; i < primnumber; i++)
    {
        if (primnumber % i == 0)
        {
            cout << "Number is not prime" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Number is prime" << endl;
    }

    // Scope of variable
    // Definition: Scope refers to the visibility and lifetime of a variable within a program.
    // Example: Variable 'i' declared inside the for loop has scope limited to that loop.
    
    // Operator precedence
    // Definition: Operator precedence determines the order in which operators are evaluated in an expression.
    // Tip: Use brackets to ensure the desired order of operations.

    return 0;
}
