#include <iostream>
using namespace std;
int main()
{
    long int k;
     long long a ; 
    cin >> k;
    for(int i= 0 ;i<k;i++){
       a = k*k ;
    int kill = 0;
    for (int i1 = 0; i1 < k; i1++)
    {
        for (int j1 = 0; j1 < k; j1++)
        {
            for (int i2 = 0; i2 < k; i2++)
            {
                for (int j2 = 0; j2 < k; j2++)
                {
                    if (abs(i1 - i2) + abs(j1 - j2) == 3)
                    {
                        kill++ ; 
                    }
                }
            }
        }
    }
    cout<<a-kill<<"\n"; 
    }
   
}