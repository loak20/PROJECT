#include<iostream>
using namespace std ;
int main () {
    long long int n ,a=1 , m = 1000000007; 
    
    cin>> n ;
 
    for(long long int i = 0 ; i<n;i++){
a= (2*a)%m ;
    } 
    cout<<a ; 
}