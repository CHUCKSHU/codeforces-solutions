#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        long k, x, y, n;
        cin >> x >> y >> n;

        int rem = n % x;
        if (rem == y)
        {
            cout << n << endl;
            continue;
        }

        int sub;
        if (rem > y)
        {
            sub = rem - y;
            cout << n - sub << endl;
        }
        else
        {
            sub = rem + (x - y);
            cout << n - sub << endl;
        }
    }
    return 0;
}
