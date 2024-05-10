#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

void Vald_and_odd(ll n , ll k ) {
    ll x = n;

    for (ll ii = 1;;  ii *=2){
        ll y = x / 2 + x % 2;
        if(y >= k) {
            cout << (2 * k - 1) * ii << endl;
            
            break;
        }
        else {
            k -= y;
            x /= 2;
        }
    }

    //     ll x = (n + 1) / 2;
    // if(k <= x) {
    //     return 2 * k - 1;
    // }
    // else {
    //     return 2 * (k - x);
    // }

}

void CloSolveKori() {
    ll n ,k;
    cin >> n >> k;
    Vald_and_odd(n, k);
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}