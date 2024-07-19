#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    unordered_map<char, int> mp;

    for (auto i : s)
    {
        mp[i]++;
    }
    if (mp.size() % 2)
    {
        cout << "IGNORE HIM!" << endl;
    }
    else
    {
        cout << "CHAT WITH HER!" << endl;
    }


    return 0;
}