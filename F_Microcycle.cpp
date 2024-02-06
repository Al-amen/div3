#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
    int n, q;
    cin >> n;
    vector<int> a(n), nott(n);
    for (int &i : a)
    {
        cin >> i;
    }
    nott[n - 1] = n;
    for (int i = n - 2; i >= 0; i--)
    {
        nott[i] = (a[i] == a[i + 1] ? nott[i + 1] : i + 1);
    }
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        --l;
        --r;
        if (nott[l] > r)
        {
            cout << -1 << ' ' << -1 << '\n';
        }
        else
        {
            cout << l + 1 << ' ' << 1 + nott[l] << '\n';
        }
    }
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}