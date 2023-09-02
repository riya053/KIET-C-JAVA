#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n \n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<j<<" ";
            
        }
        
        cout<<endl;
    }
    
}

output:

Enter the value of n 
5
1 2 3 4 5 
1 2 3 4
1 2 3
1 2
1
