#include <iostream>
using namespace std;
int main()
{
    // part 1
    // int r = 1, c = 4, i = 1;
    // cin>>c;
    // while (r <= c)
    // {
    //     i = 1;
    //     while (i <= c)
    //     {
    //         cout << i << " ";
    //         i++;
    //     }
    //     cout << endl;
    //     r++;
    // }
    // output
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4

    // part 2
    // int n, i = 1, count = 1;
    // cin >> n;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << count << " ";
    //         count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    // output
    // 1 2 3
    // 4 5 6
    // 7 8 9

    // part 3
    // int i = 1, n;
    // cin >> n;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << i << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    // output
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5
    // 6 6 6 6 6 6

    // part 4
    // int i = 1, n, count = 1;
    // cin >> n;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << count << " ";
    //         j++;
    //         count++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    // output
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10

    // part 5
    // int r = 1, n, count = 1;
    // cin >> n;
    // while (r <= n)
    // {
    //     int c = 1;
    //     count = r;
    //     while (c <= r)
    //     {
    //         cout << count << " ";
    //         count++;
    //         c++;
    //     }
    //     cout << endl;
    //     r++;
    // }
    // output
    // 1
    // 2 3
    // 3 4 5
    // 4 5 6 7

    // part 6
    // int r = 1, n, count = 1;
    // cin >> n;
    // while (r <= n)
    // {
    //     int c = 1;
    //     count = r;
    //     while (c <= r)
    //     {
    //         cout << count << " ";
    //         count--;
    //         c++;
    //     }
    //     cout << endl;
    //     r++;
    // }
    // output
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1

    //  part 7
    // int r = 1, n;
    // cin >> n;
    // while (r <= n)
    // {
    //     int c = 1;
    //     while (c <= n)
    //     {
    //         char ch = '@' + r;
    //         cout << ch << " ";
    //         c++;
    //     }
    //     cout << endl;
    //     r++;
    // }
    // output
    // A A A A A
    // B B B B B
    // C C C C C
    // D D D D D
    // E E E E E

    //   part 8
    // int r = 1, n;
    // cin >> n;
    // while (r <= n)
    // {
    //     int c = 1;
    //     while (c <= n)
    //     {
    //         char ch = '@' + c;
    //         cout << ch << " ";
    //         c++;
    //     }
    //     cout << endl;
    //     r++;
    // }
    // output
    // A B C D
    //  A B C D
    //  A B C D
    //  A B C D

    //   part 9
    // int r = 1, n, count = 1;
    // cin >> n;
    // while (r <= n)
    // {
    //     int c = 1;
    //     while (c <= n)
    //     {
    //         char ch = '@' + count;
    //         cout << ch << " ";
    //         c++;
    //         count++;
    //     }
    //     cout << endl;
    //     r++;
    // }
    // output
    // A B C
    //  D E F
    //  G H I

    //   part 10
    // int r = 1, n, count = 1;
    // cin >> n;
    // while (r <= n)
    // {
    //     int c = 1;
    //     while (c <= n)
    //     {
    //         char ch = '@' + r + c - 1;
    //         cout << ch << " ";
    //         c++;
    //         count++;
    //     }
    //     cout << endl;
    //     r++;
    // }
    // output
    // A B C
    // B C D
    // C D E

    //   part 11
    // int r = 1, n;
    // cin >> n;
    // while (r <= n)
    // {
    //     int c = 1;
    //     while (c <= r)
    //     {
    //         char ch = '@' + r;
    //         cout << ch << " ";
    //         c++;
    //     }
    //     cout << endl;
    //     r++;
    // }
    // output
    // A
    // B B
    // C C C

    //   part 12
    // int r = 1, n, count = 1;
    // cin >> n;
    // while (r <= n)
    // {
    //     int c = 1;
    //     while (c <= r)
    //     {
    //         char ch = '@' + count;
    //         cout << ch << " ";
    //         count++;
    //         c++;
    //     }
    //     cout << endl;
    //     r++;
    // }
    // output
    // A
    // B C
    // D E F
    // G H I J
    // K L M N O

    //   part 13
    // int r = 1, n, count = 1;
    // cin >> n;
    // while (r <= n)
    // {
    //     int c = 1;
    //     count = r;
    //     while (c <= r)
    //     {
    //         char ch = '@' + count;
    //         cout << ch << " ";
    //         count++;
    //         c++;
    //     }
    //     cout << endl;
    //     r++;
    // }
    // output
    // A
    // B C
    // C D E
    // D E F G
    // E F G H I

    //   part 14
    // int r = 1, n;
    // cin >> n;
    // while (r <= n)
    // {
    //     int c = 1;
    //     while (c <= r)
    //     {
    //         char ch = '@' + n - r + c;
    //         cout << ch << " ";
    //         c++;
    //     }
    //     cout << endl;
    //     r++;
    // }
    // output
    // D
    // C D
    // B C D
    // A B C D

    //   part 15
    // int r = 1, n, count = 1;
    // cin >> n;
    // while (r <= n)
    // {
    //     int c = 1;
    //     count = r;
    //     while (c <= n)
    //     {
    //         char ch = '@' + count;
    //         cout << ch << " ";
    //         count++;
    //         c++;
    //     }
    //     cout << endl;
    //     r++;
    // }
    // output
    // A B C
    // B C D
    // C D E

    //   part 16
    // int r = 1, n;
    // cin >> n;
    // while (r <= n)
    // {
    //     int space = n - r;
    //     while (space)
    //     {
    //         cout << " ";
    //         space--;
    //     }

    //     int col = 1;
    //     while (col <= r)
    //     {
    //         cout << "*";
    //         col++;
    //     }

    //     cout << endl;
    //     r++;
    // }
    // output
    //       *
    //      **
    //     ***
    //    ****
    //   *****
    //  ******
    // *******

    //   part 17
    // int n;
    // cin >> n;
    // int row = n;
    // while (row > 0)
    // {
    //     int col = row;
    //     while (col > 0)
    //     {
    //         cout << "*";
    //         col--;
    //     }
    //     cout << endl;
    //     row--;
    // }
    // output
    //*****
    //****
    //***
    //**
    //*

    //   part 18
    // int n;
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     int space = row - 1;
    //     while (space)
    //     {
    //         cout << " ";
    //         space--;
    //     }
    //     int col = n;
    //     while (col >= row)
    //     {
    //         cout << "*";
    //         col--;
    //     }

    //     cout << endl;
    //     row++;
    // }
    // output
    // ******
    //  *****
    //   ****
    //    ***
    //     **
    //      *

    //   part 19
    // int n;
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     int space = n - row;
    //     while (space)
    //     {
    //         cout << " ";
    //         space--;
    //     }
    //     int j = 1;
    //     while (j <= row)
    //     {
    //         cout << j;
    //         j++;
    //     }
    //     int start = row - 1;
    //     while (start)
    //     {
    //         cout << start;
    //         start--;
    //     }

    //     cout << endl;
    //     row++;
    // }
    // output
    //     1
    //    121
    //   12321
    //  1234321
    // 123454321

    //   part 20
    int n;
    cin >> n;
    int row = n;
    int count = 1;
    while (row > 0)
    {
        int mid = n - row;
        int j = 1;
        while (j <= row)
        {
            cout << j;
            j++;
        }
        while (mid)
        {
            cout << "**";
            mid--;
        }

        int end = row;
        while (end)
        {
            cout << end;
            end--;
        }
        cout << endl;
        row--;
    }
    // output
    // 1234554321
    // 1234**4321
    // 123****321
    // 12******21
    // 1********1
    return 0;
}