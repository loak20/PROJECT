#include<iostream>
using namespace std ;
int main(){
    long long int n  ; 
    cin>>n ;
    long long ans  = 0;
    for(long long int  i  = 5 ;i<=n;i=i*5){ //jee formula for exponent of 5 in factorial used . we find 
                                                // power of 5 in fact beacuse every 5*2 is giving the zero . 
        ans = ans + n/i ;
    }
    

cout<<ans  ; 
}