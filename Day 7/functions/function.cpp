#include <iostream>
using namespace std;

// Function to print multiplication table
void table()
{
    int start, end, table;
    cout << "Enter start, end, and table: ";
    cin >> start >> end >> table;
    // Loop to generate and print the table
    for (; start <= end; start++)
    {
        cout << table << " x " << start << " = " << (start * table) << endl;
    }
}

// Function to multiply two numbers
int mul(int a, int b)
{
    return a * b; // Return the product of a and b
}

// Function to check if a number is even or odd
void isEven(int a)
{
    if (a & 1) // Checking the least significant bit to determine if the number is odd
    {
        cout << "The number is odd" << endl; // Print message if number is odd
    }
    else
    {
        cout << "The number is even" << endl; // Print message if number is even
    }
}

int main()
{
    table(); // Call the table function to print multiplication table
    table(); // Call the table function again

    // Demonstrate the usage of the mul function
    int a = 10, b = 20;
    int ans = mul(a, b);
    cout << "Answer of 10 * 20: " << ans << endl;

    // Demonstrate the usage of the isEven function
    isEven(10); // Check if 10 is even

    return 0;
}
