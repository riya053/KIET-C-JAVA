#include<iostream>
using namespace std;
int main()
{
    int n,count=1;
    cout<<"Enter the value of n \n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}

output:

nter the value of n
5
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
