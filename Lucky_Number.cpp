#include <iostream>
using namespace std;
int main()
{

    long  n;
    cin >> n;
    int temp;
    int count=0;


    while (n != 0)
    {
        temp = n % 10;
        
        if (temp==4 || temp ==7)
        {
            count++;
        }
        n = n / 10;
        
    }
    if (count==4 || count == 7)
    {
        cout<<"YES"<<endl;
    }else
    {
        cout<<"NO"<<endl;
    }
    
    

    return 0;
}