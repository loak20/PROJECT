#include<iostream>
#include<vector>
using namespace std ; 
int main()
{
    vector<int>s1 ;
    vector<int>s2  ;                   //logic dekha . implementing was done by me. 
    long long int n ,sum,mid; 
    cin>>n ; 
    sum = n*(n+1)/2 ; 
    mid = sum /2  ; 
    if(sum%2!=0){
        cout<<"NO" ; 
    }
    else{
        for(long long int i = n ; i>0;i--){
            if(i<=mid){
                s1.push_back(i) ; 
                mid = mid - i ; 
            }
            else{
              s2.push_back(i) ; 
            }
        }
        cout<<"YES"<<"\n" ; 
        cout<<s1.size()<<"\n" ;
        for(long long int i = 0;i<s1.size();i++){
            cout<<s1[i]<<" ";
            
        }
          cout<<"\n" ; 
        cout<<s2.size()<<"\n" ;
        for(long long int i = 0;i<s2.size();i++){
            cout<<s2[i]<<" ";
           
        }
        
    }



    
} 
