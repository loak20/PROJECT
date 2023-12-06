#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std ;
int main(){
    string s ; 
    long int maxl=1 ,l  = 1;//declaring temporary max value , and current count of contiguous characters (l) .
    vector<char>a ; // declaring vector inorder to compare its elements later .
    cin>>s ;
    int n = s.length() ;
    for(int i =0;i<n;i++ ){
        a.push_back(s[i]) ; // pushing the characters of the DNA seq in the vector . 
        }
        int k =a.size() ; 
        for(int j = 0 ;j<k-1;j++){ /*loop to compare the elements and updating the max value if the current length
                                   of continuous characters is greater than the previous max.*/  
             if(a[j]==a[j+1]){     
                l++ ;                   // checking if they consecutive elements are equal . 
                maxl = max(maxl,l) ; 
        }
        else{
            l=1;    /*resetting the current max length to 1 if the chain of consecutive identical characters 
                           gets broken*/ 
        }
    }
    cout<<maxl ; 
   }