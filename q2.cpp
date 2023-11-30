#include<iostream>
using namespace std ;
int main (){
   long int n ;
    cin>> n ;
   long int sum = n*(n+1)/2 ;
   long int summ = 0 ; 
   long int a ;
   // sum of n no.s - sum of n-1 no.s (not including the missing no) = missing no .
    for(int i = 0 ; i <n-1;i++){
        cin>>a ;
        summ = summ+a ; 
    }
    cout<<sum-summ ; 
}