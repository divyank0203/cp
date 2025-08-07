#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        string s;
        cin >> s;
        x--; // convert to 0-based index

        int left = 0, right = 0;

        // Count empty cells to the left of Hamid
        for (int i = x - 1; i >= 0; i--) {
            if (s[i] == '.') left++;
            else break; // stop at first wall
        }

        // Count empty cells to the right of Hamid
        for (int i = x + 1; i < n; i++) {
            if (s[i] == '.') right++;
            else break; // stop at first wall
        }

        // If any side is fully open (i.e., escape in 1 move)
        if (left == n - x - 1 || right == x) {
            cout << 1 << '\n';
        } else if (left == 0 || right == 0) {
            // one direction is fully blocked
            cout << 1 << '\n';
        } else {
            cout << min(left, right) + 1 << '\n';
        }
    }

    return 0;
}
