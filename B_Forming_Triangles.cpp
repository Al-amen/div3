#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

ll area_for_3(int n) {
    return 1LL * n * (n - 1) * (n - 2) / 6;
}
ll area_for_2(int n) {
    return 1LL * n * (n - 1) / 2;
}
void CloSolveKori() {
    int n;
    cin >> n;
    vector<int> ln(n + 1, 0);
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        ln[a]++;
    }
    ll p = 0;
    ll q = 0;
    for (int i = 0; i <= n; i++) {
        if(ln[i] >= 3) {
            p += area_for_3(ln[i]);
        }
        if(ln[i] >= 2) {
            p += area_for_2(ln[i]) * q;


        }
        q += ln[i];
    }
    cout << p << endl;
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}



