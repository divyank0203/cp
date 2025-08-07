#include <bits/stdc++.h>
using namespace std;

int mex(vector<int> v) {
    set<int> s(v.begin(), v.end());
    for (int i = 0; i <= 100; i++) {
        if (s.find(i) == s.end()) return i;
    }
    return 101; 
}


bool isValid(vector<int> v) {
    int mx = max({v[0], v[1], v[2]});
    int mn = min({v[0], v[1], v[2]});
    return mex(v) == (mx - mn);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
             cin >> a[i];
        }
        bool ok = true;
        for (int i = 0; i <= n - 3; i++) {
            vector<int> seg = {a[i], a[i+1], a[i+2]};
            if (seg[0] != -1 && seg[1] != -1 && seg[2] != -1) {
                if (!isValid(seg)) {
                    ok = false;
                    break;
                }
            } else {
                bool found = false;
                for (int x = 0; x <= 4 && !found; x++) {
                    for (int y = 0; y <= 4 && !found; y++) {
                        for (int z = 0; z <= 4 && !found; z++) {
                            vector<int> temp = {
                                seg[0] == -1 ? x : seg[0],
                                seg[1] == -1 ? y : seg[1],
                                seg[2] == -1 ? z : seg[2]
                            };
                            if (isValid(temp)) {
                                found = true;
                            }
                        }
                    }
                }
                if (!found) {
                    ok = false;
                    break;
                }
            }
        }
        if(ok){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
   
}
