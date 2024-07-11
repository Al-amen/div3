#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
    int n; cin >> n;
    int x = n / 2;
    int y = n / 3;
    if(n == 2) {
        cout << 2 << "\n";
        return;
    }
    if(x == y) {
        cout << 3 << endl;
        return;

    }
    if(x > y) {
        cout << 2 << endl;
    }
    else {
        cout << 3 << endl;
    }

}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}