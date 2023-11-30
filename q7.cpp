#include<iostream>
using namespace std ;
int main(){
    int n ;
    cin>>n ; 
    for(int k = 1 ;k<=n ;k++){
      long long int positions = k*k*(k*k-1)/2 - 4*(k-1)*(k-2) ; //arrived at this formula for no of valid positions
      cout<<positions<<"\n" ;                                       // of knights . 
      }
}                    //problem is that im not able to handle very very large values with this . 