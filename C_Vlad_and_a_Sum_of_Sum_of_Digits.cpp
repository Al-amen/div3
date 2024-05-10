

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define endl '\n'
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
const int mx = 2 * 1e5;
int dp[mx+1];

void Dp() {
    dp[1] = 1;
    for (int i = 2; i <= mx; i++)
    {
        int x = i, y= 0;
        while (x > 0)
        {
            y += x % 10;
            x /= 10;
        }
        dp[i] = dp[i - 1] + y;
    }
}

void CloSolveKori()
{
    ll n;
    cin >> n;
    cout << dp[n] << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    Dp();
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
        CloSolveKori();
    return 0;
}