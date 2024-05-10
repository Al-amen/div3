#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
    int n;
    cin >> n;
    vector<int> v(n);
    int mn = INT_MAX;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mn = min(v[i], mn);
        mp[v[i]]++;
    }
    if(mp[mn] == 1) {
        cout << "YES\n";
        return;
    }
    else {
        for (int i = 0; i < n; i++) {
            if(v[i] % mn != 0) {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}