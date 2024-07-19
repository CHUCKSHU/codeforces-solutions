#include <iostream>
using namespace std;
int main()
{
        int a,b;
        cin>>a>>b;
        int count;
       while (a<=b)
        {
              a=3 *a;
              b=2 *b;
              count++;  
        }
       
       

        cout<<count;
        
        return 0;
}