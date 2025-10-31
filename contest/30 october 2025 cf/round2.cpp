#include<bits/stdc++.h>

using namespace std;
 
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
      cin >> s[i];
    }
    const int inf = int(1e9);
    int min_s = inf;
    int max_s = -inf;
    int min_d = inf;
    int max_d = -inf;
    int min_i = inf;
    int max_i = -inf;
    int min_j = inf;
    int max_j = -inf;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (s[i][j] == '#') {
          min_s = min(min_s, i + j);
          max_s = max(max_s, i + j);
          min_d = min(min_d, i - j);
          max_d = max(max_d, i - j);
          min_i = min(min_i, i);
          max_i = max(max_i, i);
          min_j = min(min_j, j);
          max_j = max(max_j, j);
        }
      }
    }
    cout<<"min_s "<<min_s<<" max_s "<<max_s<<" min_d "<<min_d<<" max_d "<<max_d<<" min_i "<<min_i<<" max_i "<<max_i<<" min_j "<<min_j<<" max_j "<<max_j<<endl;
    if ((max_i - min_i <= 1 && max_j - min_j <= 1) || max_s - min_s <= 1 || max_d - min_d <= 1) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
  }
  return 0;
}
