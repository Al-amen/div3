#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
      ll n, a, b;
    cin >> n >> a >> b;
    ll ans = n * a;
    if (b < 2 * a) {
        ans = (n / 2) * b + (n % 2) * a;
    }
    cout << ans << '\n';
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}
