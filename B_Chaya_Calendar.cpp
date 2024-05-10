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
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        a[i] = v[i];
    }
    int x = v[0];
    for (int i = 1; i <n; i++) {
       if(v[i] < v[i-1]){
           
       }
       else {
           v[i] *= 2;
       }
    }
    if(v[n-1] == a[n-1]) {
        cout << n << endl;
    }
    else 
       cout << v[n - 1] << endl;
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}