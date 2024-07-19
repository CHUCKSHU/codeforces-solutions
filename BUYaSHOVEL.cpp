#include <iostream>
using namespace std;
int main()
{

    int k, r;
    cin >> k >> r;

    //number of shovels we gonna buy currentlys
    int times = 1 ;

    //infinite loop untill our requirements are met
    while(1){
        int x = times*k ;
        if(x%10 == 0 or x%10 == r){
            break ;
        }
        times++ ;
    }

    cout<<times<<endl ;
}