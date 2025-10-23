#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i+1;j++)
        { 
             cout<<"* ";    
        }
        cout<<"\n";
    }
    
    for(int i=n;i>0;i--)
    {
        for(int j=i-1;j>0;j--)
        {
            cout<<"* ";
        }
        cout<<"\n";
        
    }
    
    return 0;
}
