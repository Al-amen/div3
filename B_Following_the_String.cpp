#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
vector<int> arr(26, 0);

int searchValue(int x)
{
    for (int j = 0; j < 26; ++j)
    {
        if (arr[j] == x)
        {
            arr[j]++;
            return j + 97;
        }
    }
    return -1; // Handle not found case
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        string ans = "";
        for (int j = 0; j < n; ++j)
        {
            ans += (char)searchValue(a[j]);
        }

        cout << ans << endl;

        arr.assign(26, 0);
    }

    return 0;
}