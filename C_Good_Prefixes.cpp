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
    vector<ll> v(n);
      ll sum = 0;
   map<ll, ll> mp;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
       
         
    }
 
   int ans = 0;
   set<ll> ss;
   for (int i = 0; i < n; i++) {
       sum += v[i];
       ss.insert(v[i]);
       ll h = *(--ss.end());
       if (sum - h == h)
       {
           ans++;
     }
   }
   cout << ans << endl;
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}