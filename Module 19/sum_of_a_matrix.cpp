#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;

    cout << "Row and Col " ;
    cin >> row >> col;
    cout << endl;
    int a[row][col], b[row][col], c[row][col];
    cout << "a :" << endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col;j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "b :" << endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col;j++)
        {
            cin >> b[i][j];
        }
    }
    cout << "c :" << endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col;j++)
        {
           cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
