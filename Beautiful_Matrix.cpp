#include <bits/stdc++.h>

using namespace std;

int main(){
  
    vector<vector<int>> v(5);
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int temp;
            cin>>temp;
            v[i].push_back(temp);
        }
        
    }
    int row,col ;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(v[i][j]==1){
               row = i;
               col = j ; 
            }
        }
        
    }
    int ans = abs(2-row) + abs(2-col) ;
    cout<<ans<<endl;
    
    return 0;

}