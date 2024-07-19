#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;

        cin >> n;
            int i;
        int arr[n];
        
        for ( i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for ( i = 0; i < n; i++)
        {
            if (i%2==0 && arr[i]%2==0)
        {
            cout<<"good array";
        }
        
        }
        
    }

    return 0;
}