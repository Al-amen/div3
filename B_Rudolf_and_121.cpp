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
    int mx = -INT_MAX;
    set<int> s;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
        mx = max(mx, v[i]);
        s.insert(v[i]);
    }

    for (int i = 1; i < n-1; i++) {
        if(v[i-1] <=v[i+1] && v[i] >= 2*v[i-1] ) {
                v[i+1]-=v[i-1]; 
                v[i]-=2*v[i-1]; 
                 v[i-1]=0; 
        }
    }
    int ok = 1;
    for (int i = 0; i < n; i++) {
        if(v[i] != 0) {
            ok = 0;
            break;
        }
    }
    if(ok) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}