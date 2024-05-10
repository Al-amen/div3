#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
    ll n,m;
    cin >> n>>m;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    string s;
    cin >> s;
    int j = n - 1;
    int k = 0;
    vector<int> val;
    for (int i = 0; i < n; i++) {
        if(s[i] == 'L'){
            val.push_back(v[k]);
             k++;
        }
           
        else{
            val.push_back(v[j]);
             j--;
        }
           
    }

    vector<int> ans(n);
    int product = 1;
    for (int i = n - 1; i >= 0; i--) {
        ans[i] = (product % m * val[i] % m) % m;
        product = ans[i];
    }

    for(auto it : ans) {
        cout << it << " ";
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