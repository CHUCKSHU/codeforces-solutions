#include <iostream>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, ma1, ma2;
        cin >> a >> b;

        ma1 = abs((2 * b) * (2 * a - 2 * b));
        ma2 = abs((2 * a) * (2 * b - 2 * a));

        int ans = min(ma1, ma2);
        cout<<ans;
    }
    return 0;
}