#include<iostream>
using namespace std ;
int main(){
    long long int n ;
    cin>>n ; 
    if(n==1){
        cout<<"1" ; 
    }
    else if(n==2 or n==3){
        cout<<"NO SOLUTION" ;                               //hint liya tha for this problem
    }
    else if(n==4){
        cout<<"3"<<" "<<"1"<<" "<<"4"<<" "<<"2" ; 
    }
    else{
        for (int i = n; i>0; i=i-2)
        {
            cout<<i<<" " ;                       //writing numbers by the difference of 2  . 
        }
        for (int j = n-1; j > 0;j=j-2)
        {
            cout<<j<<" " ; 
        }
        
        
    }
}