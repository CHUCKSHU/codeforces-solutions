#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int n;

    cin >> n;
    int original_n=n;
    int cnt = 0;

   // cout<<floor(log10(n)+1); another method of counting numbers
   

    while (n > 0)
    {
        int n1 = n % 10;
        n = n / 10;

        if (n1 !=0 && original_n % n1 == 0)
        {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}

