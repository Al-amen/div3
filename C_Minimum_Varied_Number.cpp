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
    int p = 9;
    vector<int> v;
    while(n) {
        if(p >= n) {
            v.push_back(n);
            break;
        }
        else {
            v.push_back(p);
            n -= p;
            p--;
        }
    }
    sort(v.begin(), v.end());
    for(auto it : v) {
        cout << it;
    }
    cout << endl;
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}