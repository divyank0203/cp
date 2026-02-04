#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {

    int T;
    cin >> T;
    while (T--) {
        ll B, G, X, Y, N;
        cin >> B >> G >> X >> Y >> N;

        // Basic impossibility
        if (X + Y > N || B < X || G < Y) {
            cout << -1 << endl;
            continue;
        }

        ll total = B + G;

        
        ll low = (total + N - 1) / N; 

        
        ll high = min({
            B / X,
            G / Y,
            total / (X + Y)
        });

        if (low > high)
            cout << -1 << endl;
        else
            cout << low << endl;
    }

}
