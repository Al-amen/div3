#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
    ll n;
    cin >> n;
    while(n!=1) {
        if(n%2 == 0) {
            cout << n  << " ";
            n = n / 2;
        }
        else {
            cout << n << " ";
            n = n * 3 + 1;
        }
    }
    cout << 1 << endl;
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//  int tc; cin>>tc;
//  while(tc--)
 CloSolveKori();
return 0;
}