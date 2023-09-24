#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)     
    {
        for (int j = 1; j <= n; j++)
        {
            cout << n - j + 1;
        }
        cout << endl;
    }
    return 0;
}

// 4321 used reverse of pattern 1 here instead of j we are using n-j+1;
// 4321
// 4321
// 4321
