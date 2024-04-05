#include <iostream>
using namespace std;

// Function to perform linear search
bool linearSearch()
{
    int a[20], limit, ele;
    cout << "Enter the limit of the array: ";
    cin >> limit;
    cout << "Enter " << limit << " elements in the array: ";
    for (int i = 0; i < limit; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the element you want to find: ";
    cin >> ele;
    // Linear search algorithm
    for (int i = 0; i < limit; i++)
    {
        if (ele == a[i])
        {
            return true; // Element found
        }
    }
    return false; // Element not found
}

int main()
{
    // Performing linear search and printing result
    if (linearSearch())
    {
        cout << "Number is present in the array";
    }
    else
    {
        cout << "Number is absent in the array";
    }
    return 0;
}
