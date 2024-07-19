#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <math.h>


using namespace std;
int main()
{     

    int n, k, l, c, d, p, nl, np;
    cin>> n>> k>> l>> c>> d>> p>> nl>> np;

    int tot_drink= (k*l)/nl;
    int tot_slice= c*d;
    int salt = p/np;
    
  int  ans= min(min(tot_drink, tot_slice), salt)/n;
      
    cout<< ans <<endl;
    return 0;
}

