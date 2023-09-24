#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter your number :";
    cin >> n;

    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            count++;
            cout << count << " ";
        }
        cout << endl;
    }
}

// Enter your number :3  her is the output of this code ...
// 1 2 3 
// 4 5 6
// 7 8 9