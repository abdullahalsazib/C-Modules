#include <bits/stdc++.h>
using namespace std;
void fun(int n)
{
    if (n == 0)
        return;
    int x = n % 10;
    fun(n / 10);
    cout << x << " ";
}
int main()
{

    int t;
    cout << "Test Case :";
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        
        int n;
        cout << "Enter Digits: ";
        cin >> n;
        if (n == 0)
            cout << 0 << endl;
        fun(n);
        cout << endl;
    }

    return 0;
}
