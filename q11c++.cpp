#include<iostream>
#include<set> 
using namespace std ;
typedef set<int> s ; 
#define pb push_back 
int main() {
s a  ;
int n ;
long long int x ; 
cin>>n ;
for(int i = 0 ; i<n;i++){
    cin>>x ; 
    a.insert(x) ; 
}
cout<<a.size() ; 
}



