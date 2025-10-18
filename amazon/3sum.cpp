#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    vector<vector<int>> ans;

    for (int i = 0; i < n; i++) {
       
        if (i > 0 && v[i] == v[i - 1]) {
            continue;
        }

        int j = i + 1;
        int k = n - 1;

        while (j < k) {
            int sum = v[i] + v[j] + v[k];

            if (sum < 0) {
                j++;
            } 
            else if (sum > 0) {
                k--;
            } 
            else {
                vector<int> temp = {v[i], v[j], v[k]};
                ans.push_back(temp);

                j++;
                k--;

                
                while (j < k && v[j] == v[j - 1]) j++;
                while (j < k && v[k] == v[k + 1]) k--;
            }
        }
    }

  
    for (auto triplet : ans) {
        for (auto num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}

