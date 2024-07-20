#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int diff = abs(a - b);
        if (a == b)
        {
            cout << 0 << endl;
        }
        else if (diff <= 10)
        {
            cout << 1 << endl;
        }
        else if (a > b || a < b)
        {
            if (diff % 10 == 0)
            {
                cout << diff / 10 << endl;
            }
            else
            {
                cout << (diff / 10) + 1 << endl;
            }
        }
    }

    return 0;
}