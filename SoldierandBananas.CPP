#include <iostream>
using namespace std;
int main()
{

      int k, n, w;
      cin >> k >> n >> w;
      int x = 0;
      int i;



            for (i = 1; i <= w; i++)
            {
                  x = x + (i * k);
            }
            
      
      if(n<x){
            cout<<x-n;
      }
      else if (n>=x)
      {
            cout << 0 << endl;
      }
}