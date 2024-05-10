#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define endl '\n'
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
int mx = 1e8;
void CloSolveKori()
{
    int n;
    cin >> n;

    vector<int> v(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> v[i];
    }

    vector<int> ans;
    ans.push_back(mx);
    for (int i = 0; i < n-1; i++)
    {
        ans.push_back(ans.back() + v[i]);
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
  
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