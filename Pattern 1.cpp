#include<iostream>
using namespace std;
int main()
{   
    char ch='A';
    int m=5,n=5;
    int i,j;
    for(i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0||i==(m-1)||j==0||j==(n-1))
            cout<<"*";
            else
                cout<<ch++;
               
        }
        cout<<endl;
    }
}

OUTPUT:
e } ; if ($?) { .\tempCodeRunnerFile }
*****
*ABC*
*DEF*
*GHI*
*****
