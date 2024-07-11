#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
    int x, y, z;
    cin >> x >> y >> z;
    int mn = min(min(x, y), z);
    int mx = max(max(x, y), z);
    vector<int> v;
    v.push_back(x);
    v.push_back(y);
    v.push_back(z);
    sort(v.begin(), v.end());

    int c = abs(v[1] - v[0]) + abs(v[1] - v[2]);

    cout << c << endl;
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}