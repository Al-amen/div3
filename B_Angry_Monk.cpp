#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
     int n, k;
    cin >> n >> k;
    vector<int> a(k);
    
    for (int i = 0; i < k; ++i) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    
    ll ans = 0;
    
  
    ans += n - a[k - 1];
    
    
    for (int i = 0; i < k - 1; ++i) {
        if (a[i] > 1) {
            ans += a[i] - 1;
        }
    }
    
    cout << ans << "\n";
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}