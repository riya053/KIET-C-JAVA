#include<iostream>
using namespace std;
int main()

{
    int m=5,n=5;
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=m-i;j++)
        
           {
             cout<<" ";
           }
           
            for(int j=0;j<=i;j++)
            {
                cout<<"*";
            }
             
        
        
        cout<<endl;
    }
    return 0;
}

output:
 *
     **
    ***
   ****
  *****
 ******
