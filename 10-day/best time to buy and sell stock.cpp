
#include <bits/stdc++.h>
using namespace std;


int main() {
      int n;
      cin>>n;
      vector<int>prices(n);
      
      for(int i=0;i<n;i++)
      {
          cin>>prices[i];
      }
      
       int minprice=INT_MAX;
       int maxi=0;
        
        for(int i=0;i<prices.size();i++)
        {
            minprice=min(minprice,prices[i]);
            
            int profit=prices[i]-minprice;
            maxi=max(maxi,profit);
            
        }
        
        cout<<maxi;
            
      
      
          


    return 0;
}
