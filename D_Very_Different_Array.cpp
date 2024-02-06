#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define endl '\n'
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori()
{
    int n, m;
    cin >> n >> m;
    deque<int> a(n);
    deque<int> b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(b.begin(), b.end(), greater<int>());
    sort(a.begin(), a.end());
    ll ans = 0;
    while(!a.empty()) {
        int k1 = abs(a.front() - b.front());
        int k2 = abs(a.back() - b.back());
        if(k1>=k2) {
            ans += 1LL*k1;
            a.pop_front();
            b.pop_front();
        }
        else {
            ans += 1LL*k2;
            a.pop_back();
            b.pop_back();
        }
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
        CloSolveKori();
    return 0;
}