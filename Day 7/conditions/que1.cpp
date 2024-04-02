#include <iostream>

using namespace std;

int main()
{

    int num = 1;
    while (num)
    {

        switch (num)
        {
        case 1:
            cout << "First" << endl;
            exit(0);
            break;

        default:
            cout << "Default" << endl;
            break;
        }
    }
    cout << "haris";
}
