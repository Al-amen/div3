#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n),b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    vector<int> diff(n, 5);
    diff[0] = b[0];
    for (int i = 1; i < n; i++) {
        diff[i] = max(diff[i - 1], b[i]);
    }
    int ans = 0, total = 0;
    for (int i = 0; i < min(n, k);i++) {
        total += a[i];
        int x = k - (i + 1);
        int p = total + x * diff[i];
        ans = max(ans, p);
    }
    cout << ans << endl;
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}