#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){

    int n;
    cin>>n;
    
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        bool flag =0;
        for (int i = 0; i < n; i++)
        {
            if (v[i]==1)
            {
                flag=1;
            }
        }
        
        if(flag==0){
            cout<<"EASY";
        }
        else{
            cout<<"HARD";
        }
        

        
        
        
    
    return 0;
}