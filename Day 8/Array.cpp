#include <iostream>
using namespace std;

// Function to handle array operations
void Array()
{
    int limit;
    cout << "Enter the limit of the array: ";
    cin >> limit;

    int arr[20];
    cout << "Enter the elements in the array of size " << limit << ": ";
    for (int i = 0; i < limit; i++)
    {
        cin >> arr[i];
    }

    cout << "The elements in the array are: ";
    for (int i = 0; i < limit; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Declaring an array 'a' of size 20 and printing its size
    int a[20];
    cout << "Size of array 'a': " << sizeof(a) << endl; // 80

    // Printing the size of an integer
    cout << "Size of integer: " << sizeof(int) << endl; // 4

    // Calling the Array function to handle array operations
    Array();

    return 0;
}
