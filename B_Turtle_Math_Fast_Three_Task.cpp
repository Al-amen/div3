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
    vector<ll> v(n);
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }
    if(sum%3 ==0){
        cout << "0\n";
        return;
    }
    if(sum %3 == 2) {
        cout << 1 << endl;
        return;
    }
    else {

        for (int i = 0; i < n; i++) {
            if((sum-v[i])%3 == 0) {
                cout << "1\n";
                return;
            }
        }
    }
    cout << "2\n";
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}