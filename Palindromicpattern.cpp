#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n \n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {  int j;
        for( j=1;j<=(n-i);j++)
        {   
            cout<<"  ";
        }
        int k=i;
    
        for(;j<=n;j++)
        {
            cout<<k--<<" ";
            
        }
        k=2;
        for(;j<=(n+i-1);j++)
        {   
            cout<<k++<<" ";
            
        }
        
        
        cout<<endl;
    }
    
}

output:

Enter the value of n 
7
            1 
          2 1 2
        3 2 1 2 3
      4 3 2 1 2 3 4
    5 4 3 2 1 2 3 4 5 
  6 5 4 3 2 1 2 3 4 5 6
7 6 5 4 3 2 1 2 3 4 5 6 7
