#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
     
     int x, y, z;
    x=abs(x1-x2)+abs(x1-x3);

    y=abs(x2-x3)+abs(x2-x1);

    z=abs(x3-x1)+abs(x3-x2);

  int  ans= min(x, min(y, z));

    cout<< ans <<endl;

    return 0;
}