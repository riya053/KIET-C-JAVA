#include<iostream>
using namespace std;
int main()

{
    int m=5;
    for(int i=0;i<=m;i++)
    {
        for(int j=(m-i);j>0;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

output:
*****
****
***
**
*
