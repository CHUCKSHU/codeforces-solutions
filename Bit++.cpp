
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    int x=0;
    cin>>n;
    while(n--){
         
         string str;
         cin >> str;
        if(str== "X++"|| str == "++X")
        {
            x++;
        }else if(str=="X--" || str=="--X")
        {
                    x--;
        }
    }

    cout<<x<<endl;
    return 0;
}
/* 
#include <bits/stdc++.h>
using namespace std ;


int main(){
    int n ;
    int x = 0 ;  //initial value
    cin>>n ;

    while(n--){
        string str ;
        cin>>str ;

        if(str == "X++"){
            x++ ;
        }
        else if (str=="X--")
        {
            x-- ;
        }
        else if(str == "--X"){
            --x ;
        }
        else{
            ++x ;
        }
    }
    cout<<x<<endl ;
    return 0 ;
}*/