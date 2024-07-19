#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    string t;
    cin >> t;
    // string h[5];
    int flag = 0;
    /*  for (int i = 0; i < 5; i++)
      {
          cin >> h[i];
      }

      for (int i = 0; i < 5; i++)
      {
          if (h[i][0] == t[0] or h[i][1] == t[1])
          {
              flag = 1;
          }
      }

      if (flag == 1)
      {
          cout << "YES" << endl;
      }
      else
      {
          cout << "NO" << endl;
      }   */

    vector<string> h(5);
    
    for (int i = 0; i < h.size(); i++)
    {
         string v;
         // cin>> h[i];
        cin >> v;
        //h.push_back(v);
        h[i]=v;
    }

    for (int i = 0; i < h.size(); i++)
    {
        if (h[i][0] == t[0] || h[i][1] == t[1])
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}