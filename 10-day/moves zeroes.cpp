#include <bits/stdc++.h>
using namespace std;


int main() {
      int n;
      cin>>n;
      vector<int>v(n);
      vector<int>temp;
      int count=0;
      
      for(int i=0;i<n;i++)
      {
          cin>>v[i];
      }
      
     
      
      for(int i=0;i<n;i++)
      {
             if(v[i]>0)
             {
                 temp.push_back(v[i]);
                 count++;
             }
         
      }
      
      for(int i=0;i<n-count;i++)
      {
           temp.push_back(0);
      }
      
      for(int i=0;i<n;i++)
      {
          cout<<temp[i];
      }
      
      
      
          


    return 0;
}
