#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int mx = max(a, b);
    int mn = min(a, b);
    int x = 0, y = 0;
    if(c >= mn and c <= mx) {
        x = 1;
    }
    if(d >= mn and d <= mx) {
        y = 1;
    }
    if((x and y ) or ( !x and !y)) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
    }
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}