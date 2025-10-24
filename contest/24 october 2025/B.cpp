#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, q;
        cin >> n >> q;
        string s;
        cin >> s;

        bool b = (s.find('B') != string::npos);

        while (q--) {
            ll a;
            cin >> a;
            ll ans=0;
            if (!b) { 
                
cout<<a<<endl;
continue;
            }
            ll i=0;

            
            while (a > 0) {
                if (s[i] == 'B') {
                    
                    a /= 2;
                    ans++;
                    i = (i + 1) % n;
                }
                else {
                    
                    ll count = 0;
                    while (s[(i + count) % n] == 'A' && count < n) {
                        count++;
                    }

                    if (a > count) {
                        
                        a -= count;
                        ans += count;
                        i = (i + count) % n;
                    } 
                    else {
                        
                        ans += a;
                        break;
                    }
                }
            }
            cout<<ans<<endl;
        }
    }
}



