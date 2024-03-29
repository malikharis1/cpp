#include <iostream>
using namespace std;

int main()
{
    // Part 1: Printing Rectangular Pattern
    // Definition: Prints a rectangular pattern of asterisks.
    // int r = 1, c = 1;

    // while (r <= 4)
    // {
    //     while (c <= 5)
    //     {
    //         cout << "*";
    //         c++;
    //     }
    //     cout << "\n";
    //     c = 1;
    //     r++;
    // }

    // Output:
    // *****
    // *****
    // *****
    // *****

    // Part 2: Printing Hollow Rectangular Pattern
    // Definition: Prints a hollow rectangular pattern of asterisks with spaces in between.
    // int r = 1, c = 1;

    // while (r <= 5)
    // {
    //     while (c <= 5)
    //     {
    //         if (r == 1 || c == 1 || r == 5 || c == 5)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //         c++;
    //     }
    //     cout << "\n";
    //     c = 1;
    //     r++;
    // }

    // Output:
    // *****
    // *   *
    // *   *
    // *   *
    // *****

    // Part 3: Printing Hollow Diamond Pattern
    // Definition: Prints a hollow diamond pattern of asterisks with spaces in between.
    // int r = 1, c = 1;

    // while (r <= 5)
    // {
    //     while (c <= 5)
    //     {
    //         if (r == 1 || c == 1 || r == 5 || c == 5 || r == c)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //         c++;
    //     }
    //     cout << "\n";
    //     c = 1;
    //     r++;
    // }

    // Output:
    // *****
    // **  *
    // * * *
    // *  **
    // *****

    // Part 4: Printing Inverted Triangle Pattern
    // Definition: Prints an inverted triangle pattern of asterisks.
    // int r = 1, c = 5;

    // while (r <= 5)
    // {
    //     while (c >= r)
    //     {
    //         cout << "*";
    //         c--;
    //     }
    //     cout << "\n";
    //     c = 5;
    //     r++;
    // }

    // Output:
    // *****
    // ****
    // ***
    // **
    // *

    // Part 5: Printing Right Triangle Pattern
    // Definition: Prints a right triangle pattern of asterisks.
    int r = 1, c = 1;
    int n;
    cin >> n;
    while (r <= n)
    {
        while (c <= r)
        {
            cout << "*";
            c++;
        }
        cout << "\n";
        c = 1;
        r++;
    }

    // Output:
    // *
    // **
    // ***
    // ****
    // *****

    return 0;
}
