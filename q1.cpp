#include<iostream>
using namespace std ;
int main (){
    long int n  ;
    cin>> n ;
    cout<<n<<" "; 
    //loop for executing operations given while n is not equal to 1.
    while(n!=1){
        if(n%2==0){
            n=n /2 ; 
            cout<<n<<" " ; 
        }
        else{
            n=3*n + 1 ;
    cout<<n<<" ";
        }
    }
    
}
