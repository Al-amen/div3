#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        ll left[n], right[n];

        map<int, int> m;
        m[0] = 1;
        m[n - 1] = -1;
        for (int i = 1; i < n - 1; i++)
        {
            ll left = abs(a[i] - a[i - 1]);
            ll right = abs(a[i] - a[i + 1]);
            if (left < right)
            {
                m[i] = -1;
            }
            else
            {
                m[i] = 1;
            }
        }
        left[0] = 0;
        for (int i = 1; i < n; i++)
        {
            if (m[i] == -1)
                left[i] = 1 + left[i - 1];
            else
                left[i] = left[i - 1] + abs(a[i] - a[i - 1]);
        }
        right[n - 1] = 0;
        for (int i = n - 2; i >= 0; i--)
        {
            if (m[i] == 1)
            {
                right[i] = 1 + right[i + 1];
            }
            else
            {
                right[i] = right[i + 1] + abs(a[i] - a[i + 1]);
            }
        }

        ll q;
        cin >> q;

        while (q--)
        {
            ll x, y;
            cin >> x >> y;
            if (x == y)
            {
                cout << 0 << endl;
            }
            else
            {
                if (y > x)
                {

                    cout << right[x - 1] - right[y - 1] << endl;
                }
                else
                {
                    cout << left[x - 1] - left[y - 1] << endl;
                }
            }
        }
    }
}


