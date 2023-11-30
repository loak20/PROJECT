#include<iostream>
#include<vector>
using namespace std ;
int main (){
    int n ;
   long int b ,c;
    vector<int>a ; // declaring vector which helps me to compare elements later . 
    cin>>n ; 
    for(int i = 0 ;i<n;i++){
        cin>>b ;
        a.push_back(b) ; //loop for pushing the given seq into the vector . 
    }
   long int moves =0 ; 
    for(int i = 0;i<n-1 ; i++){
        if(a[i+1]<a[i]){
            c=abs(a[i+1]-a[i]) ; /*noticed that the moves required to make the consecutive elements similar is 
                                  equal to the value of their difference*/

            moves = moves +  c; //updating the moves done counter .
            a[i+1] = a[i+1] + c ;  // making the lesser element equal to the previous element . 
         }
    }
    cout<<moves ; 

}