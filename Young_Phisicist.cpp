#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{      
    //int x[100], y[100], z[100];  -- 154ms -array
    vector<int> x(100), y(100), z(100);  // 124ms - vector
     
    int n;
    cin >> n;

        for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i] >> z[i];
    }

    int fx = 0, fy = 0, fz = 0;

    for (int i = 0; i < n; i++)
    {
        fx += x[i];
        fy += y[i];
        fz += z[i];
    }

    if (fx == 0 && fy == 0 && fz == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;


    
    
    

   
}