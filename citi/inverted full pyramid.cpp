#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    for(int i=n;i>0;i--)
    {
        for(int j=i;j<n;j++)
        { 
             cout<<"  ";
        }
        
        for(int j=2*i-1;j>0;j--)
        {
            cout<<"* ";
        }
        
        cout<<"\n";
        
    }
    
   
    
    
    
    return 0;
}
