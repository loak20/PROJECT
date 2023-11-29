#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std ;
int main(){
    string s ; 
    long int maxl=1 ,l  = 1;
    vector<char>a ;
    cin>>s ;
    int n = s.length() ;
    for(int i =0;i<n;i++ ){
        a.push_back(s[i]) ;
        }
        int k =a.size() ; 
        for(int j = 0 ;j<k-1;j++){
             if(a[j]==a[j+1]){
                l++ ; 
                maxl = max(maxl,l) ; 
        }
        else{
            l=1;
        }
    }
    cout<<maxl ; 
   }