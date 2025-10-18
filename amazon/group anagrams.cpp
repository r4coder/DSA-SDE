#include <bits/stdc++.h>
using namespace std;


int main() {
      int n;
      cin>>n;
      vector<string>strs(n);
      vector<vector<string>>ans;
      
      unordered_map<string,vector<string>>mp;
      
      for(int i=0;i<n;i++)
      {
          cin>>strs[i];
          
      }
      
      for(int i=0;i<n;i++)
      {
          string s=strs[i];
          sort(begin(s),end(s));
          mp[s].push_back(strs[i]);
          
      }
      
      for(auto it:mp)
      {
          ans.push_back(it.second);
      }
      
      
    for (auto &group : ans) {
        for (auto &word : group) {
            cout << word << " ";
        }
        cout << "\n";
    }
      
          


    return 0;
}
