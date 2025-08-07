#include <iostream>
using namespace std;

int get_mex(int a, int b, int c) {
    bool present[4] = {false, false, false, false};

    for (int x : {a, b, c}) {
        if (x >= 0 && x <= 3) {
            present[x] = true;
        }
    }

    for (int i = 0; i <= 3; ++i) {
        if (!present[i]) return i;
    }

    return 4;
}

int main() {
    cout << get_mex(0, 1, 2) << "\n"; // Output: 3
    cout << get_mex(1, 1, 1) << "\n"; // Output: 0
    cout << get_mex(0, 3, 2) << "\n"; // Output: 1
    cout << get_mex(0, 1, 3) << "\n"; // Output: 2
}
