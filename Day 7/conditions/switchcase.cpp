#include <iostream>
using namespace std;

int main()
{
    // Declaring variables
    int num = 3;
    char ch = 'a';

    // Switch statement based on the value of num
    switch (num)
    {
        case 1:
            cout << "First" << endl;
            break;
        case 2:
            cout << "Second" << endl;
            break;
        case 3:
            // Nested switch statement based on the value of ch
            switch (ch)
            {
                case 'a':
                    cout << "Value is A" << endl;
                    break;
                default:
                    cout << "No value is found" << endl;
                    break;
            }
            break;
        default:
            cout << "Default" << endl;
            break;
    }

    return 0;
}
