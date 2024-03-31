#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // Digit to binary
    // int n;
    // cin >> n;
    // float ans = 0;
    // int i = 0;
    // while (n != 0)
    // {
    //     int bit = n & 1;

    //     ans = (bit * pow(10, i)) + ans;
    //     n = n >> 1;
    //     i++;
    // }
    // cout << "Binary is : " << ans << endl;

    // Binary to Decimal
    int n;
    cin >> n;
    float ans = 0;
    int i = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }
        n = n/10;
        i++;
    }
    cout << "Digit is : " << ans << endl;
}