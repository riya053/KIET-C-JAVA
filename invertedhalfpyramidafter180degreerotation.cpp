#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n\n";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {   
            cout<<" ";
        }
        for(int k=1;k<=n-i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

output:

enter the value of n
6
******
 *****
  ****
   ***
    **
     *
