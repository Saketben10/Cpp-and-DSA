#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter your number :";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
// 123  these are the out puts ...basically j is column which are appearing...and i is the number of rows.
// 123
// 123
