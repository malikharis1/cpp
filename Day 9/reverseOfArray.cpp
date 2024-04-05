#include <iostream>
using namespace std;

// Function to reverse an array
void reverseArray()
{
    int a[20], limit, end, start;
    cout << "Enter the limit of the array: ";
    cin >> limit;
    cout << "Enter " << limit << " elements in the array: ";
    for (int i = 0; i < limit; i++)
    {
        cin >> a[i];
    }
    start = 0;
    end = limit - 1;
    // Swapping elements to reverse the array
    for (; start <= end; start++, end--)
    {
        swap(a[start], a[end]);
    }
    // Printing the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < limit; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    reverseArray(); // Calling the reverseArray function
    return 0;
}
