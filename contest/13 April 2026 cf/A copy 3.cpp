#include <bits/stdc++.h>
using namespace std;

int main() {
    

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;

        int k = N / 2;

        for (int i = 0; i < k; i++) cout << '0';
        for (int i = k; i < N; i++) cout << '1';

        cout << endl;
    }

    
}