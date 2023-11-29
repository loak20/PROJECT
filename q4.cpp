#include<iostream>
#include<vector>
using namespace std ;
int main (){
    int n ;
   long int b ,c;
    vector<int>a ; 
    cin>>n ; 
    for(int i = 0 ;i<n;i++){
        cin>>b ;
        a.push_back(b) ; 
    }
   long int moves =0 ; 
    for(int i = 0;i<n-1 ; i++){
        if(a[i+1]<a[i]){
            c=abs(a[i+1]-a[i]) ; 
            moves = moves +  c; 
            a[i+1] = a[i+1] + c ; 
         }
    }
    cout<<moves ; 

}