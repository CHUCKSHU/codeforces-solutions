#include <iostream>
using namespace std;
int main()
{
    string str;

    cin >> str;
    // cout<<str.length();

   /* if (str[0] >='a' && str[0] <= 'z')
    {
        str[0] = str[0] - 32;
    }
    else
    {
        str[0] = str[0];
    }*/
    str[0]=toupper(str[0]);

    cout << str << endl;

    return 0;
}