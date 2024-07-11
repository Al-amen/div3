#include <bits/stdc++.h>
using namespace std;


int main()
{


    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];

        // Initialize counters for beautiful pairs
        long long cnt = 0, diff1 = 0, diff2 = 0;

        // Count beautiful pairs where the first element differs
        for (int i = 0; i < n - 2; ++i)
        {
            if (v[i] != v[i + 2])
                ++diff1;
        }

        // Count beautiful pairs where the last element differs
        for (int i = 1; i < n - 1; ++i)
        {
            if (v[i - 1] != v[i + 1])
                ++diff2;
        }

        // Calculate the total count of beautiful pairs
        cnt = diff1 * diff2;

        cout << cnt << endl;
    }

    return 0;
}
