#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
    int n, m; cin >> n>>m;
    string s; cin >> s;
    vector<int> v(m);
    for (int i = 0; i < m; i ++) {
        cin >> v[i];
    }
    string s2;
    cin >> s2;
    sort(s2.begin(), s2.end());
    map<int, int> mp;
    for(auto it: v) {
        mp[it]++;
    }

    int p = 0;
    for(auto it :mp) {
        p += it.second - 1;
    }

    s2 = s2.substr(0, m - p);
    int x = 0;
    for(auto it : mp) {
        int y = it.first;
        s[y - 1] = s2[x];
        x++;
    }
    cout << s << endl;
    
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc; cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}