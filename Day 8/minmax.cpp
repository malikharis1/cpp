#include <iostream>
using namespace std;

// Function to find the minimum value in an array
void findMin(int arr[], int limit)
{
    int minVal = arr[0];
    for (int i = 1; i < limit; i++)
    {
        minVal = min(minVal, arr[i]);
    }
    cout << "The minimum value is: " << minVal << endl;
}

// Function to find the maximum value in an array
void findMax(int arr[], int limit)
{
    int maxVal = arr[0];
    for (int i = 1; i < limit; i++)
    {
        maxVal = max(maxVal, arr[i]);
    }
    cout << "The maximum value is: " << maxVal << endl;
}

// Function to find the sum of elements in an array
void sum(int arr[], int limit)
{
    int sumVal = 0;
    for (int i = 0; i < limit; i++)
    {
        sumVal += arr[i];
    }
    cout << "The sum of array elements is: " << sumVal << endl;
}

// Function to handle array operations
void Array()
{
    int limit;
    cout << "Enter the limit of the array: ";
    cin >> limit;

    int arr[20];
    cout << "Enter " << limit << " elements in the array: ";
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

    int choice;
    cout << "Enter 1 to find the minimum value, 2 to find the maximum value, or 3 to find the sum value of the array: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            findMin(arr, limit);
            break;
        case 2:
            findMax(arr, limit);
            break;
        case 3:
            sum(arr, limit);
            break;
        default:
            cout << "Invalid choice. Exiting..." << endl;
            break;
    }
}

int main()
{
    Array(); // Calling the Array function to perform array operations
    return 0;
}
