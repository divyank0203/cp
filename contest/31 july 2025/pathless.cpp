#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> inp(n);
        for (int i = 0; i < n; i++)
        {
            cin >> inp[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += inp[i];
        }
        if (sum > s)
        {
            sort(inp.begin(), inp.end());
            for (int i = 0; i < n; i++)
            {
                cout << inp[i] << " ";
            }
            cout << endl;
        }
        else if (sum == s)
        {
            cout << -1 << endl;
        }
        else
        {
            int x = s - sum;
            if (x == 1)
            {
                int count0 = count(inp.begin(), inp.end(), 0);
                int count1 = count(inp.begin(), inp.end(), 1);
                int count2 = count(inp.begin(), inp.end(), 2);

                for (int i = 0; i < count0; ++i)
                    cout << "0 ";
                for (int i = 0; i < count2; ++i)
                    cout << "2 ";
                for (int i = 0; i < count1; ++i)
                    cout << (i == count1 - 1 ? "1\n" : "1 ");
            }
            else
            {
                cout << -1 << '\n';
            }
        }
    }
    return 0;
}