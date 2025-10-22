#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  int i=0,j=0;
  cin>>s;
  int n=s.size();
  int maxi=INT_MIN;
  int leng=0;
  unordered_map<char,int>mp;
  
  while(j<n)
  {
       mp[s[j]]++;
       
       if(mp[s[j]]>1)
       {
           mp[s[i]]--;
           i++;
          
       }
       
       
           j++;
           maxi=max(maxi,j-i+1);
      
       
       
        
  }
  
  cout<<maxi;
  
  

    return 0;
}
