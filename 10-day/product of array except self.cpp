#include <bits/stdc++.h>
using namespace std;


int main() {
      int n;
      cin>>n;
      vector<int>nums(n);
      
      for(int i=0;i<n;i++)
      {
          cin>>nums[i];
      }
      
        vector<int> prefix(n, 1); 
        vector<int> suffix(n, 1);  
        vector<int> x(n);

        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }

        for (int j = n - 2; j >= 0; j--) {
            suffix[j] = suffix[j + 1] * nums[j + 1];
        }

        for (int i = 0; i < n; i++) {
            x[i] = prefix[i] * suffix[i];
        }
        
        for(int i=0;i<n;i++)
        {
            cout<<x[i];
        }

      
      
          


    return 0;
}
