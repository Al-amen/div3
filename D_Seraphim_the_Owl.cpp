#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
    int m, n;
    cin >> n >> m;
    ll x = LLONG_MAX;
    ll y = 0;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    for (int i = n - 1; i >= 0; i--) { // checking from last index which are less or eqaul to m 
        if(i+1<=m) {
            x = min(x, y + a[i]);
        }

        y += min(a[i], b[i]);
    }
    cout << x << endl;
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}