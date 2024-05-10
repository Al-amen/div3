#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
    int x;
    cin >> x;
    int mx = -INT_MAX;
    int y;
    for (int i = 1; i < x; i++) {
        int xx = __gcd(x, i) +i;
        if(xx >= mx) {
            mx = xx;
            y = i;
        }
    }
    cout << y << endl;
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}