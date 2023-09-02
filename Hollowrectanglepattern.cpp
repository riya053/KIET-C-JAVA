#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter the value of n\n";
    cin>>n;
    cout<<"enter the value of m \n";
    cin>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {   
            if(j==0||j==(m-1)||i==0||i==(n-1))
            cout<<"*";
            else
                cout<<" ";
        
                }
        cout<<endl;
    }
}

output:

enter the value of n
5
enter the value of m 
6
******
*    *
*    *
*    *
******
