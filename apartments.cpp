#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ; 
int main(){
    long long int n,m,k,ai,bi,i=0,j=0; 
    int c = 0 ;
    cin>>n>>m>>k ; 
    vector<int> a ;
    vector<int>b ; 
    for(long long int i = 0 ;i<n;i++){
        cin>>ai ; 
        a.push_back(ai) ; 
}
for(long long int j= 0 ;j<m;j++){
    cin>>bi ; 
b.push_back(bi) ; 
}
sort(a.begin(),a.end()) ;                  //hint lekar sorting approach use kiya .(but i need some more clarity 
sort(b.begin(),b.end()) ;                         // on the approach )  .
while(i<n and j<m){
if(abs(a[i]-b[j])<=k){
    c++ ;                                      //apartment found , move to next applicant and next apartment . 
    i++;
    j++;
}
else if(a[i]>b[j]){
    j++ ;                                      //apartment not found , move to next apartment .
}
else{
    i++ ; 
}                                                //move to next person , apartment to small for the first one .
}
cout<<c ;
return 0 ; 


}
