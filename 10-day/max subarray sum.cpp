#include <bits/stdc++.h>
using namespace std;


int main() {
      int n;
      cin>>n;
      int sum=0;
      int maxi=INT_MIN;
      vector<int>v(n);
      
      for(int i=0;i<n;i++)
      {
          cin>>v[i];
      }
      
      unordered_map<int,int>m;
      
      for(int i=0;i<n;i++)
      {
             sum+=v[i];
             maxi=max(maxi,sum);
             
             if(sum<0)
             {
                 sum=0;
             }
             
        
         
      }
      
      cout<<maxi;
      
      
      
          


    return 0;
}
