#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

        long n;
        cin>>n;

        if(n%2)
        {
            cout<<0;
            return 0 ;
        }
        if (n%4==0)
        {
            cout<<(n/4)-1;
        }
        else
        {
            cout<<n/4;
        }
        
        
        




    return 0;
}