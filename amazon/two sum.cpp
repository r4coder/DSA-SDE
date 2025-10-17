#include <bits/stdc++.h>
using namespace std;


int main() {
      int n;
      cin>>n;
      int T;
      cin>>T;
      vector<int>v(n);
      
      for(int i=0;i<n;i++)
      {
          cin>>v[i];
      }
      
      unordered_map<int,int>m;
      
      for(int i=0;i<n;i++)
      {
          int c=T-v[i];
          
          if(m.find(c)!=m.end())
          {
              cout<<i<<"\n";
              cout<<m[c];
              break;
          }
          m[v[i]]=i;
      }
      
      
      
          


    return 0;
}
