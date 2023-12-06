#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
int main(){
long long int n,m,hi,ti ,a=0,b=0,temp; 
vector<int>h; 
vector<int>t ; 
cin>>n>>m ; 
for(long long int i = 0 ;i<n;i++){
    cin>>hi ;
    h.push_back(hi) ; 
}
for(long long int j = 0 ;j<m;j++){
    cin>>ti ;
    t.push_back(ti) ; 
}
sort(h.begin(),h.end()) ; 
while(b<n && a<m){
    if(h[b]<=t[a]){
        for(long long int i = b+1 ; i<n;i++){
            if(h[i]==t[a]){
                temp = i ; 
            }
            else{
                temp = b ; 
            }
        }
        cout<<h[temp]<<"\n"  ;
        b++ ;
         a++ ; 
          
    }
    else if(h[b]>t[a])
{
    cout<<"-1"<<"\n" ; 
    a++ ; 
}

}
}