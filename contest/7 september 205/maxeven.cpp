#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll answer = -1;
        ll s = a + b;
        if (s % 2 == 0)
        {
            answer = max(answer, s);
        }
        s = a * b + 1;
        if (s % 2 == 0)
        {
            answer = max(answer, s);
        }
        ll k = 1;
        while (k <= b)
        {
            if (b % k == 0)
            {
                s = a * k + b / k;
                if (s % 2 == 0)
                {
                    answer = max(answer, s);
                }
            }
            k *= 2;
            if (k > b)
                break;
        }

        k = b;
        while (k >= 1)
        {
            if (b % k == 0)
            {
                s = a * k + b / k;
                if (s % 2 == 0)
                {
                    answer = max(answer, s);
                }
            }
            if (k % 2 == 1)
                break;
            k /= 2;
        }

        cout << answer << endl;
    }

    
}